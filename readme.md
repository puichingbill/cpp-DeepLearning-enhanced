## INSTALLING C++ DISTRIBUTIONS OF OPENCV

This is your guide if you're setting up an OpenCV project for the first time. Note that unlike libtorch, you have to install opencv on your linux before you start. If you have already done this, you can skip ahead to **build and run executable**.


- Start by installing dependencies:
```shell 
        sudo apt-get update
        sudo apt-get upgrade
        sudo apt-get install libgtk2.0-dev 
        sudo apt-get install pkg-config
```

- To compile OpenCV you will need a C++ compiler. Also, OpenCV uses the CMake build configu