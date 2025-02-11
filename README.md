# C++ Example Project with Google Test

This project is a simple C++ application that reads a list of numbers from the command line, calculates their sum using a function from a separate module, and outputs the result to the console. It also includes unit tests using the Google Test framework.

## Project Structure

```
cpp-example-googletest
├── src
│   ├── main.cpp
│   ├── math.cpp
│   └── math.h
├── tests
│   └── math_test.cpp
├── CMakeLists.txt
├── Makefile
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
./build/hello <number> <number> ...
```

For example:

```
./build/hello 1.0 2.0 3.0
```

You should see the output:

```
The sum is: 6.0
```

## Running the Tests

To build and run the tests, follow these steps:

1. Open a terminal and navigate to the project directory.
2. Create a build directory if it doesn't exist:
   ```
   mkdir -p build
   cd build
   ```
3. Run CMake to configure the project with tests enabled:
   ```
   cmake .. -DBUILD_TESTS=ON
   ```
4. Build the tests:
   ```
   make
   ```
5. Run the tests:
   ```
   ctest
   ```

This will run all the tests defined in `tests/math_test.cpp` and output the results.