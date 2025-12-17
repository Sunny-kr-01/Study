import { useCallback, useEffect, useState } from 'react'

function App() {
  const [length, setlength] = useState(8)
  const [charAllowed,setChar] =useState(false)
  const [numberAllowed,setnumber] =useState(false)
  const [password,setPassword] =useState("")
  const change=useCallback(()=>{
    let pass=""
    let str="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
    if(charAllowed) str+="!@#$%^&*()_+-=[]{};:></?|~"
    if(numberAllowed) str+="1234567890";
    for (let i=0;i<length;i++) {
      let char=Math.floor(Math.random()*str.length)
      pass+=str.charAt(char)
    }
    setPassword(pass)
  },[length,charAllowed,numberAllowed])

  const copytoclipboard=useCallback(()=>{
    window.navigator.clipboard.writeText(password)
  },[password])

  useEffect(()=>{
    change()
  },[length,charAllowed,numberAllowed,change])

  return (
    <>
      <div className='bg-black w-full h-screen text-white'
      >
        <h1 className=' text-4xl text-center'
        >Password Generator</h1>
        <div className='w-full max-w-md mx-auto shadow-md rounded-lg px-4 my-8 text-orange-500 bg-gray-500 '
        >
          <div className='flex shadow rounded-lg overflow-hidden mb-4 '
          >
            <input 
            type="text" 
            value={password}
            className='outline-none w-full py-1 px-3'
            placeholder='password'
            readOnly
            />
            <button onClick={copytoclipboard} className='outline-none bg-blue-700 text-white px-3 py-0.5 shrink-0'
            >copy</button>
          </div>
          <div className='flex text-sm gap-x-2'
          >
            <div className='flex item-center gap-x-1'
            >
              <input 
              type="range"
              min={6}
              max={50}
              value={length}
              className='cursor-pointer'
              onChange={(e)=>setlength(e.target.value)}
              />
              <label>
                Length:{length}
              </label>
            </div>
            <div className='flex item-center gap-x-1'>
              <input 
              type="checkbox"
              defaultChecked={charAllowed}
              onChange={()=>{setChar((prev)=>!prev)}} 
               />
               <label htmlFor="">char</label>
            </div>
            <div className='flex item-center gap-x-1'>
              <input 
              type="checkbox"
              defaultChecked={numberAllowed}
              onChange={()=>{setnumber((prev)=>!prev)}} 
               />
               <label htmlFor="">number</label>
            </div>
          </div>
        </div>
      </div>
    </>
  )
}

export default App
