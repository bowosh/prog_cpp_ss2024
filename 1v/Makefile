all: compile checkstyle test clean

CXX = g++

compile:

	$(CXX) -c  Prime.cpp PrimeMain.cpp
	#$(CXX) -o PrimeMain PrimeMain.cpp
	#$(CXX) -o PrimeTest PrimeTest.cpp -lgtest

checkstyle:
	clang-format-14 --dry-run -Werror *.cpp

test:
	./PrimeTest

clean: 
	rm -f PrimeMain
	rm -f PrimeTest
	rm -f *.o


