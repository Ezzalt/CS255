all	: drive

drive	: main.o tesla.o
	g++ -Wall -g main.o tesla.o -o drive

main.o	: main.cpp
	g++ -Wall -g -c main.cpp

tesla.o	: tesla.cpp
	g++ -Wall -g -c tesla.cpp

clean	:
	rm -f tesla.o main.o drive
