import { useState } from 'react'


function App() {
  const [color, setColor] = useState("#212121")

  // function change(ch_color){
  //   setColor({ch_color})
  // }

  return (
    <>
      <div className='w-full h-screen '
      style={{backgroundColor: color}}
      >
        <div className='fixed flex flex-wrap justify-center bottom-16 inset-x-0 px-2'>
          <div className='flex flex-wrap justify-center gap-3 bg-white rounded-3xl px-3 py-2'>
          <button className='outline-none px-4  bg-red-500 rounded-full shadow-2xl color text-white'
          onClick={()=>{setColor("Red")}}
          >Red</button>
          <button className='outline-none px-4  bg-pink-300 rounded-full shadow-2xl color text-white'
          onClick={()=>{setColor("pink")}}
          >Pink</button>
          <button className='outline-none px-4  bg-blue-600 rounded-full shadow-2xl color text-white'
          onClick={()=>{setColor("Blue")}}
          >Blue</button>
          <button className='outline-none px-4  bg-yellow-200 rounded-full shadow-2xl color text-white'
          onClick={()=>{setColor("Yellow")}}
          >Yellow</button>
          <button className='outline-none px-4  bg-green-500 rounded-full shadow-2xl color text-white'
          onClick={()=>{setColor("green")}}
          >Green</button>
          </div>
        </div>
      </div>
    </>
  )
}

export default App
