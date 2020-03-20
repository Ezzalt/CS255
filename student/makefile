all	: drive

drive	: main.o student.o
	g++ -Wall -g main.o student.o -o drive

main.o	: main.cpp
	g++ -Wall -g -c main.cpp

student.o	: student.cpp
	g++ -Wall -g -c student.cpp

clean	:
	rm -f student.o main.o drive
