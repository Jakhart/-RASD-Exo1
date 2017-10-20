CCP=g++
CFLAG=-pg -gdwarf-2

compile:
	$(CCP) library/sorting.cpp test/main.cpp -o executable/runMe.exe
<<<<<<< HEAD

object:
	$(CCP) -c library/sorting.cpp
	$(CCP) -c test/main.cpp

<<<<<<< HEAD
tests:
	$(CCP) library/sorting.cpp library/sorting.h test/test.cpp -o executable/runMe.exe
=======
test:
	$(CCP) library/sorting.cpp test/test.cpp -o executable/runMe.exe
>>>>>>> 1a21ebb23621f882e321f83cf07f502bda1d45a2
=======

object:
	$(CCP) -c library/sorting.cpp
	$(CCP) -c test/main.cpp

test:
	$(CCP) library/sorting.cpp test/test.cpp -o executable/runMe.exe
>>>>>>> 1a21ebb23621f882e321f83cf07f502bda1d45a2

random:
	$(CCP) library/sorting.cpp library/sorting.h test/random.cpp -o executable/runMe.exe

run:
	./executable/runMe.exe

prof: 
	$(CCP) $(CFLAG) library/sorting.cpp test/random.cpp -o executable/runMe.exe
	./executable/runMe.exe
<<<<<<< HEAD
<<<<<<< HEAD
	gprof executable/runMe.exe  gmon.out > analysis.txt
=======
	gprof executable/runMe.exe gmon.out > analysis.txt
>>>>>>> 1a21ebb23621f882e321f83cf07f502bda1d45a2
=======
	gprof executable/runMe.exe gmon.out > analysis.txt
>>>>>>> 1a21ebb23621f882e321f83cf07f502bda1d45a2

