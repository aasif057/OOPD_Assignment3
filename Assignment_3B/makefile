# Combined Makefile for Program 1 (Boost) and Program 2 (SQLite3)
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Libraries for each program
BOOST_LIBS = -lboost_system -lboost_date_time
SQLITE_LIBS = -lsqlite3

# Targets to build both programs
all: program1 program2

# Program 1 (Boost)
program1: program1.o
	$(CXX) -o program1 program1.o $(BOOST_LIBS)

program1.o: program1.cpp
	$(CXX) $(CXXFLAGS) -c program1.cpp

# Program 2 (SQLite3)
program2: program2.o
	$(CXX) -o program2 program2.o $(SQLITE_LIBS)

program2.o: program2.cpp
	$(CXX) $(CXXFLAGS) -c program2.cpp

# Clean up all generated files
clean:
	rm -f program1 program1.o program2 program2.o
