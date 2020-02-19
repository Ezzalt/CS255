all	: drive

drive	: driver.o charStack.o convertToNum.o
	g++ -Wall -g driver.o charStack.o convertToNum.o -o drive

driver.o	: driver.cpp
	g++ -Wall -g -c driver.cpp

charStack.o	: charStack.cpp
	g++ -Wall -g -c charStack.cpp

convertToNum.o	: convertToNum.cpp
	g++ -Wall -g -c convertToNum.cpp

clean	:
	rm -f charStack.o driver.o convertToNum.o drive
