# How to play
run **menu.exe** to execute the command based menu. Press **0** to play the game, press **1** to select a difficulty from 1-10, and press **2** to exit the game.

# Modifying the code
To modify the code it will be complicated.

1. Install MinGW on your computer
[![PICTURE-1.png](https://i.postimg.cc/nzW4zbm7/PICTURE-1.png)](https://postimg.cc/ZBrB7QVK)
2. Install the marked bins
[![PICTURE-3.png](https://i.postimg.cc/ThMnVVC3/PICTURE-3.png)](https://postimg.cc/SYdXqzBB)
4. Then you will need to add **c:\MinGW\bin** to the system enviroment.
You can do this by searching **edit the system enviroment variables** in the windows search bar,
[![PICTURE-5.png](https://i.postimg.cc/50DsrFnZ/PICTURE-5.png)](https://postimg.cc/jwQ6wCVX)
pressing **enviroment variables**, clicking the path variable, then edit, and then adding a new line saying **C:\MinGW\bin**
[![PICTURE-6.png](https://i.postimg.cc/X7dzTQMx/PICTURE-6.png)](https://postimg.cc/HVWzM0k7)

And thats it really! If you are going to be regulary changing or testing the code you can go to **C:\MinGW\bin** in file exlporer and rename **mingw32-make** to anything easier. For example, I changed mine to **mmake**. You can also test that it works by typing in the name of the exe file and it should give an error, but thats as there is no makefile. If you open command prompt in the working directory of the pong game, it should compile the code it main, and menu.exe.
[![PICTURE-9.png](https://i.postimg.cc/pdGGDS8V/PICTURE-9.png)](https://postimg.cc/B8FB3MMR)

    
   

