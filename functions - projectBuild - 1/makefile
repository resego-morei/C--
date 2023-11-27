# Makefile for a simple C++ program

# Compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Source files and output executable
SRCS = main.cpp
TARGET = r

# Build rule
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean rule
clean:
	rm -f $(TARGET)
