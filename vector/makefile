all	: drive

drive	: main.o mathVector.o
	g++ -Wall -g main.o mathVector.o -o drive

main.o	: main.cpp
	g++ -Wall -g -c main.cpp

mathVector.o	: mathVector.cpp
	g++ -Wall -g -c mathVector.cpp

clean	:
	rm -f mathVector.o main.o drive
