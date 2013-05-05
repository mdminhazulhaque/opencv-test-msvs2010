OpenCV Visual Studio 2010 Test Project
======================================

## What is it ##
Just tested `OpenCV 2.44` on VS2010. So I am sharing the project and some sort of tips here.

## How to use ##
[Download](http://opencv.org/downloads.html) OpenCV bundle for Windows. Extract and move to the following directory.

`opencv\build\`

Now do the followings

+ Copy `opencv\build\x86\vc10\bin` to `C:\Program Files (x86)\Microsoft Visual Studio 2010\VC\bin`
+ Copy `opencv\build\x86\vc10\lib` to `C:\Program Files (x86)\Microsoft Visual Studio 2010\VC\lib`
+ Copy `opencv\build\include\opencv2` to `C:\Program Files (x86)\Microsoft Visual Studio 2010\VC\include`

Now clone this repo, open it via `File` menu.

![VC Project](http://i.imgur.com/XmeD0eC.png)

Open `Properties` from context menu. Click `Linker > Input`

![Properties](http://i.imgur.com/URLnWU2.png)

Now edit and check the `Additional Dependecies`.

![OpenCV dependecies](http://i.imgur.com/KDyLIGN.png)

Now Build and Run the project. Here is how the output window looks like.

![OpenCV Preview](http://i.imgur.com/bQsxfp1.jpg)

## Hard to use? ##
Choose MinGW and use Qt Creator/Codeblocks. `:)`