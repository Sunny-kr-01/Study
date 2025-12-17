import React from 'react'

export default function InputBox({
  label,
  amount,
  currencyOptions = [],
  selectCurrency,
  onCurrencyChange = () => {},
  onAmountChange = () => {},
  amountDisable = false,
}) {
  return (
    <div className="flex flex-col gap-2 mb-2">
      <label className="text-sm font-medium">{label}</label>
      <div className="flex gap-2">
        <input
          type="number"
          step="any"
          value={amount}
          onChange={(e) => onAmountChange(e.target.value)}
          disabled={amountDisable}
          className="flex-1 p-2 border rounded"
        />
        <select
          value={selectCurrency}
          onChange={(e) => onCurrencyChange(e.target.value)}
          className="p-2 border rounded"
        >
          {currencyOptions.length === 0 && <option value="">—</option>}
          {currencyOptions.map((c) => (
            <option key={c} value={c}>
              {c}
            </option>
          ))}
        </select>
      </div>
    </div>
  )
}

