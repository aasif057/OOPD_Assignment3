CC = g++
CFLAGS = -std=c++11 -fPIC
DEBUGFLAGS = -g
OPTFLAGS = -O2
LDFLAGS = -shared
INCLUDE = -Iinclude
LIB_SOURCES = src/Platform.cpp src/Line.cpp src/Station.cpp
LIB_OBJECTS = $(LIB_SOURCES:.cpp=.o)
TARGET_LIB = librailway.so
EXECUTABLE = railway_app

# Build both library and test program by default
all: library test_program

# Target to build the shared library
library: $(LIB_OBJECTS)
	$(CC) $(LDFLAGS) $(LIB_OBJECTS) -o $(TARGET_LIB)

# Target to build the test program with the shared library
test_program: test.o $(TARGET_LIB)
	$(CC) test.o -L. -lrailway -o $(EXECUTABLE)

# Compile test.o with debug flags
debug: CFLAGS += $(DEBUGFLAGS)
debug: test_program

# Compile test.o with optimization flags
release: CFLAGS += $(OPTFLAGS)
release: test_program

# Generate test.o
test.o: test.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c test.cpp

# Compile library source files
%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(LIB_OBJECTS) test.o $(TARGET_LIB) $(EXECUTABLE)
