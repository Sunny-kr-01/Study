import { useState, useEffect } from "react";
import InputBox from "./components/InputBox";
import useCurrencyInfo from "./hooks/useCurrencyInfo";

function App() {
  const [from, setFrom] = useState("USD");
  const [to, setTo] = useState("INR");
  const [amount, setAmount] = useState("1");
  const [convertedAmount, setConvertedAmount] = useState("");
  const [initialized, setInitialized] = useState(false);

  const { rates: currencyInfo, loading, error } = useCurrencyInfo(from);

  const options = currencyInfo
    ? [from, ...Object.keys(currencyInfo)].filter(
        (v, i, arr) => arr.indexOf(v) === i
      )
    : [];

  useEffect(() => {
    if (!initialized && options.length > 0) {
      if (!options.includes(from)) setFrom("USD");
      if (!options.includes(to)) setTo("INR");
      setInitialized(true);
    }
  }, [options, initialized, from, to]);

  const convert = () => {
    const amt = parseFloat(amount);
    if (isNaN(amt)) {
      setConvertedAmount("");
      return;
    }

    if (from === to) {
      setConvertedAmount(amt.toFixed(2));
      return;
    }

    const rate = currencyInfo?.[to];
    if (!rate) {
      setConvertedAmount("");
      return;
    }

    setConvertedAmount((amt * rate).toFixed(2));
  };

  const swap = () => {
    const temp = from;
    setFrom(to);
    setTo(temp);
    setConvertedAmount("");
  };

  return (
    <div
      className="flex justify-center items-center min-h-screen bg-cover bg-center bg-no-repeat"
      style={{
        backgroundImage: "url(https://imgs.search.brave.com/7xspHGMQUCQHPVLd-WNRxWYn4KpaxQs6qr2zKWEFsLg/rs:fit:500:0:1:0/g:ce/aHR0cHM6Ly9tZWRp/YS5pc3RvY2twaG90/by5jb20vaWQvMTU3/NzM4MjA5L3Bob3Rv/L2ZseWluZy1tb25l/eS5qcGc_cz02MTJ4/NjEyJnc9MCZrPTIw/JmM9OXp5Sjc2cFRR/OGo4d2ExN1ZYV2Z0/NVFLZXhKdmRndWNk/NXNTNFNSS2w4ST0)", 
      }}
    >
      <div className="p-6 rounded-2xl border w-full max-w-lg backdrop-blur bg-white/20">
        {error && (
          <p className="text-red-500 mb-2">Error loading rates: {error}</p>
        )}

        <InputBox
          label="From"
          amount={amount}
          currencyOptions={options}
          selectCurrency={from}
          onCurrencyChange={(c) => setFrom(c)}
          onAmountChange={(v) => setAmount(v)}
        />

        <div className="flex justify-center my-3">
          <button
            onClick={swap}
            className="bg-blue-500 text-white px-5 py-1 rounded-lg"
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

        <button
          onClick={convert}
          disabled={loading}
          className="w-full mt-3 py-2 rounded-xl bg-blue-600 text-white disabled:opacity-50"
        >
          {loading ? "Loading..." : "Convert"}
        </button>
      </div>
    </div>
  );
}

export default App;
