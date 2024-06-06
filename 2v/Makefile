#all: compile checkstyle test clean
all: compile test clean

CXX = g++

compile:
	$(CXX) -c Prime.cpp PrimeMain.cpp PrimeTest.cpp
	$(CXX) -o PrimeMain Prime.o PrimeMain.o
	$(CXX) -o PrimeTest PrimeTest.o Prime.o -lgtest

checkstyle:
#	clang-format-14 --dry-run -Werror *.cpp
#	clang-format-14 -i *.cpp
#	clang-format-14 -i *.h
	python ../cpplint.py *.cpp

test:
	./PrimeTest

clean: 
	rm -f PrimeMain
	rm -f PrimeTest
	rm -f *.o


