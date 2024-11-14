# OOPD_Assignment3

## Project Structure

├── include/                 # Header files for Platform, Line, and Station classes \
│   ├── Platform.h           # Header file for Platform class \
│   ├── Line.h               # Header file for Line class \
│   └── Station.h            # Header file for Station class \
├── src/                     # Source files for Platform, Line, and Station class implementations \
│   ├── Platform.cpp         # Implementation file for Platform class \
│   ├── Line.cpp             # Implementation file for Line class \
│   └── Station.cpp          # Implementation file for Station class \
├── test.cpp                 # Test file for demonstrating the functionality of the library \
├── makefile                 # Makefile for building the shared library and test program \
└── librailway.so            # Compiled shared library (generated) \

## Building the file

terminal:/dir$ make

this will create a shared library and an executable file named railway_app

terminal:/dir$ LD_LIBRARY_PATH=. ./railway_app

we use LD_LIBRARY_PATH=. to set the library path to the current library so that the system will look for shared libraries in the current directory
then we run the executable railway_app, which will now be able to find and load librailway.so from the current directory.


## Resources Used:
I have used ChatGPT for some parts of the code.
