all	: drive

drive	: main.o clowncar.o
	g++ -Wall -g main.o clowncar.o -o drive

main.o	: main.cpp
	g++ -Wall -g -c main.cpp

clowncar.o	: clowncar.cpp
	g++ -Wall -g -c clowncar.cpp

clean	:
	rm -f clowncar.o main.o drive
  
