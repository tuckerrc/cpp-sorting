all: sorting

sorting: sorting.o
	g++ sorting.o -o sorting.out

sorting.o: sorting.cpp
	g++ -c sorting.cpp
