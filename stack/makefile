all	: drive

drive	: driver.o intStack.o
	g++ -Wall -g driver.o intStack.o -o drive

driver.o	: driver.cpp
	g++ -Wall -g -c driver.cpp

intStack.o	: intStack.cpp
	g++ -Wall -g -c intStack.cpp

clean	:
	rm -f intStack.o driver.o drive
