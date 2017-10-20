CCP=g++
CFLAG=-pg -gdwarf-2

compile:
	$(CCP) library/sorting.cpp test/main.cpp -o executable/runMe.exe


object:
	$(CCP) -c library/sorting.cpp
	$(CCP) -c test/main.cpp

tests:
	$(CCP) library/sorting.cpp  test/test.cpp -o executable/runMe.exe

random:
	$(CCP) library/sorting.cpp library/sorting.h test/random.cpp -o executable/runMe.exe

run:
	./executable/runMe.exe

prof: 
	$(CCP) $(CFLAG) library/sorting.cpp test/random.cpp -o executable/runMe.exe
	./executable/runMe.exe
	gprof executable/runMe.exe  gmon.out > analysis.txt


