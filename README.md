<div align="center" id="top"> 
  <img src="./.github/app.gif" alt="Prog-Class" />

  &#xa0;

  <!-- <a href="https://aulasprog.netlify.app">Demo</a> -->
</div>

<h1 align="center">Prog-Class</h1>

<p align="center">
  <img alt="Github top language" src="https://img.shields.io/github/languages/top/faber222/Prog-Class?color=56BEB8">

  <img alt="Github language count" src="https://img.shields.io/github/languages/count/faber222/Prog-Class?color=56BEB8">

  <img alt="Repository size" src="https://img.shields.io/github/repo-size/faber222/Prog-Class?color=56BEB8">

  <img alt="License" src="https://img.shields.io/github/license/faber222/Prog-Class?color=56BEB8">

  <img alt="Github issues" src="https://img.shields.io/github/issues/faber222/Prog-Class?color=56BEB8" /> 

  <img alt="Github forks" src="https://img.shields.io/github/forks/faber222/Prog-Class?color=56BEB8" /> 

  <img alt="Github stars" src="https://img.shields.io/github/stars/faber222/Prog-Class?color=56BEB8" /> 
</p>

<!-- Status -->

<h4 align="center"> 
	🚧  Prog-Class 🚀 Under construction...  🚧
</h4> 

<hr> 

<p align="center">
  <a href="#dart-about">About</a> &#xa0; | &#xa0; 
  <a href="#sparkles-features">Features</a> &#xa0; | &#xa0;
  <a href="#rocket-technologies">Technologies</a> &#xa0; | &#xa0;
  <a href="#white_check_mark-requirements">Requirements</a> &#xa0; | &#xa0;
  <a href="#checkered_flag-starting">Starting</a> &#xa0; | &#xa0;
  <a href="#memo-license">License</a> &#xa0; | &#xa0;
  <a href="https://github.com/faber222" target="_blank">Author</a>
</p>

<br>

## :dart: About ##

For running and debug using the Windows OS, you need to install MinGW Installation Manager.
Install the entire instance of GCC.
Change the environment variables, in the path, edit and create the folder c:\MinGW\bin.
After, go to vscode, press F5, and edit the lauch.json and c_cpp_properties.json, maybe you need to create this folder.
All the steps is under this site https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html 

## :sparkles: Features ##

:heavy_check_mark: Install MinGW;\
:heavy_check_mark: Change the environment variables;\
:heavy_check_mark: Edit Path and create the folder C:\MinGW\bin;

## :rocket: Technologies ##

The following tools were used in this project:

- [MinGW](https://ufpr.dl.sourceforge.net/project/mingw/Installer/mingw-get-setup.exe)
- [Tutorial](https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html)
- [Git](https://git-scm.com/)
- [C](https://www.learn-c.org/)

## :white_check_mark: Requirements ##

Before starting :checkered_flag:, you need to have [Git](https://git-scm.com) and [MinGW](https://ufpr.dl.sourceforge.net/project/mingw/Installer/mingw-get-setup.exe) installed.

## :checkered_flag: Starting ##

```bash
# Clone this project
$ git clone https://github.com/faber222/Prog-Class

# Access
$ cd Prog-Class
$ git switch windows
$ git pull

# Open VScode
$ code .

# Create the c_cpp_properties.json
# On this folder, you might to be change, "compilerPath": "C:\\MinGW\\bin\\gcc",
$ cd .vscode

# For compiler, press F6, this will create a executable code 
# Or use this command
$ gcc -g {fileNameDir} -c
$ a.exe
```

## :memo: License ##

This project is under license from MIT. For more details, see the [LICENSE](LICENSE.md) file.


Made with :heart: by <a href="https://github.com/faber222" target="_blank">faber222</a>

&#xa0;

<a href="#top">Back to top</a>
