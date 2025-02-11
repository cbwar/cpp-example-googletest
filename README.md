# My C++ CMake Project

This project is a simple C++ application that outputs "Hello, World!" to the console. It uses CMake as the build system.

## Project Structure

```
my-cpp-cmake-project
├── src
│   └── main.cpp
├── CMakeLists.txt
└── README.md
```

## Building the Project

To build the project, follow these steps:

1. Open a terminal and navigate to the project directory.
2. Create a build directory:
   ```
   mkdir build
   cd build
   ```
3. Run CMake to configure the project:
   ```
   cmake ..
   ```
4. Build the project:
   ```
   make
   ```

## Running the Program

After building the project, you can run the program with the following command:

```
./my-cpp-cmake-project
```

You should see the output:

```
Hello, World!
```