import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  let [counter,setcounter]=useState(15)
    const add_value=()=>{
      if(counter+1<21){
      setcounter(counter+1)
      }
  }
  const sub_value=()=>{
    if(counter-1>=0){
      counter=counter-1;
      setcounter(counter)
    }
  }
  return (
    <>
      <h1>Counter</h1>
      <h2>Counter value : {counter}</h2>
      <button
      onClick={add_value}
      >Increase value</button>
      <button
      onClick={sub_value}
      >Decrease value</button>
    </>
  )
}

export default App
