all	: drive

drive	: main.o baseFour.o
	g++ -Wall -g main.o baseFour.o -o drive

main.o	: main.cpp
	g++ -Wall -g -c main.cpp

baseFour.o	: baseFour.cpp
	g++ -Wall -g -c baseFour.cpp

clean	:
	rm -f baseFour.o main.o drive
