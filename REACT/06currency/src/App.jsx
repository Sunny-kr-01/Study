import React, { useState, useEffect } from 'react'
import InputBox from './components/InputBox'
import useCurrencyInfo from './hooks/useCurrencyInfo'

function App() {
  const [from, setFrom] = useState('USD')
  const [to, setTo] = useState('INR')
  const [amount, setAmount] = useState('1') // keep as string for input binding
  const [convertedAmount, setConvertedAmount] = useState('')

  // hook returns an object { rates, loading, error }
  const { rates: currencyInfo, loading, error } = useCurrencyInfo(from)

  // guard against undefined
  const options = Object.keys(currencyInfo || {})

  const convert = () => {
    const amt = parseFloat(amount)
    if (isNaN(amt)) {
      setConvertedAmount('')
      return
    }

    // rates keys are uppercase (API returns uppercase codes)
    const rate = currencyInfo?.[to?.toUpperCase()]
    if (!rate) {
      console.warn('Rate not found for', to, 'available keys:', Object.keys(currencyInfo || {}))
      setConvertedAmount('')
      return
    }

    setConvertedAmount((amt * rate).toFixed(4))
  }

  const swap = () => {
    const prevFrom = from
    setFrom(to)
    setTo(prevFrom)
    setConvertedAmount('') // clear result; new rates will load for new base
  }

  // Optional: auto-convert when new rates arrive (and target rate exists)
  useEffect(() => {
    if (!loading && currencyInfo && amount) {
      if (currencyInfo[to?.toUpperCase()]) convert()
    }
    // eslint-disable-next-line react-hooks/exhaustive-deps
  }, [currencyInfo, to])

  return (
    <div
      className="w-full h-screen flex items-center justify-center bg-cover bg-no-repeat"
      style={{
        backgroundImage: "url('https://imgs.search.brave.com/7xspHGMQUCQHPVLd-WNRxWYn4KpaxQs6qr2zKWEFsLg/rs:fit:500:0:1:0/g:ce/aHR0cHM6Ly9tZWRp/YS5pc3RvY2twaG90/by5jb20vaWQvMTU3/NzM4MjA5L3Bob3Rv/L2ZseWluZy1tb25l/eS5qcGc_cz02MTJ4/NjEyJnc9MCZrPTIw/JmM9OXp5Sjc2cFRR/OGo4d2ExN1ZYV2Z0/NVFLZXhKdmRndWNk/NXNTNFNSS2w4ST0')",
      }}
    >
      <div className="w-full max-w-md p-5 bg-white/30 rounded-lg border border-gray-300">
        {loading && <div className="mb-2">Loading exchange rates…</div>}
        {error && <div className="mb-2 text-red-600">Error loading rates: {error}</div>}

        <form
          onSubmit={(e) => {
            e.preventDefault()
            convert()
          }}
        >
          <InputBox
            label="From"
            amount={amount}
            currencyOptions={options}
            selectCurrency={from}
            onCurrencyChange={(c) => setFrom(c)}
            onAmountChange={(v) => setAmount(v)}
          />

          <div className="my-3 text-center">
            <button
              type="button"
              className="px-3 py-1 bg-blue-600 text-white rounded"
              onClick={swap}
            >
              Swap
            </button>
          </div>

          <InputBox
            label="To"
            amount={convertedAmount}
            currencyOptions={options}
            selectCurrency={to}
            onCurrencyChange={(c) => setTo(c)}
            amountDisable
          />

          <button type="submit" className="w-full mt-3 py-2 rounded bg-blue-600 text-white">
            Convert
          </button>
        </form>
      </div>
    </div>
  )
}

export default App
