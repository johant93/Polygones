CXX=g++
CXXFLAGS=-std=c++11

all: main.o 
	$(CXX) $(CXXFLAGS) main.o
	./a.out

main.o: main.cpp AbstractPolygone.hpp Square.hpp Triangle.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm *.o a.out