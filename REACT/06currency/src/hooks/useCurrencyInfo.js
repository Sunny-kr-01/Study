import { useState, useEffect } from 'react'

// Simple hook that fetches rates from exchangerate.host (free, no key needed)
export default function useCurrencyInfo(base = 'USD') {
  const [rates, setRates] = useState({})
  const [loading, setLoading] = useState(true)
  const [error, setError] = useState(null)

  useEffect(() => {
    let cancelled = false
    async function load() {
      setLoading(true)
      setError(null)
      try {
        const baseUp = (base || 'USD').toUpperCase()
        const res = await fetch(`https://api.exchangerate.host/latest?base=${baseUp}`)
        if (!res.ok) throw new Error(`HTTP ${res.status}`)
        const data = await res.json()
        if (!cancelled) setRates(data.rates || {})
      } catch (err) {
        if (!cancelled) setError(err.message || 'Fetch error')
      } finally {
        if (!cancelled) setLoading(false)
      }
    }
    load()
    return () => {
      cancelled = true
    }
  }, [base])

  return { rates, loading, error }
}
