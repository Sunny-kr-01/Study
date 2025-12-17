import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Card2 from './components/card.jsx'
function App() {
  const [count, setCount] = useState(0)

  return (
    <>
      <h1 className='bg-green-500 rounded-xl text-black p-4'>Tailwind Intro</h1>
      <Card2 place='KiiT'/>
      <Card2 place='KIIT'/>
    </>
  )
}
 
export default App
