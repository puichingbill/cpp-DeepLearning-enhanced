## INSTALLING C++ DISTRIBUTIONS OF OPENCV

This is your guide if you're setting up an OpenCV project for the first time. Note that unlike libtorch, you have to install opencv on your linux before you start. If you have already done this, you can skip ahead to **build and run executable**.


- Start by installing dependencies:
```shell 
        sudo apt-get update
        sudo apt-get upgrade
        sudo apt-get install libgtk2.0-dev 
        sudo apt-get install pkg-config
```

- To compile OpenCV you will need a C++ compiler. Also, OpenCV uses the CMake build configuration tool:
```shell
    sudo apt install -y g++
    sudo apt-get install cmake
    sudo apt-get install make
```

- Next, clone the opencv's repository using git:
```shell
    git clone https://github.com/opencv/opencv.git
    git clone https://github.com/opencv/opencv_contrib.git
```

- Create a build directory for opencv:
```shell
    mkdir -p build && cd build
```

- Configure and generate build scripts for the preferred build system:
```shell
    cmake -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules ../opencv
```

- Run the actual compilation process. 4 denotes the number of used processor cores.
```shell
    make -j4
```

- The installation process involves copying files to predefined locations and doing minor patching:
```shell
    sudo make install
```

- Finally, you are ready! Now all you have to do is generate the executable file and run it. Note that you may remove the build folder because you don't need it anymore.
```shell
    rm -r ./*
```
### Build and run executable file
- This will build your executable file:
```shell
    cmake -S ..
    cmake --build . --config Release
```

- Run the executable file:
```shell
    ./<file name>
```

## INSTALLING C++ DISTRIBUTIONS OF PYTORCH
Start by downloading libtorch from <a href='https://p