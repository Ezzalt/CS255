all	: drive

drive	: main.o odometer.o
	g++ -Wall -g main.o odometer.o -o drive

main.o	: main.cpp
	g++ -Wall -g -c main.cpp

odometer.o	: odometer.cpp
	g++ -Wall -g -c odometer.cpp

clean	:
	rm -f odometer.o main.o drive
