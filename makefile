CCP=g++

compile:
	$(CCP) library/sorting.cpp library/sorting.h test/main.cpp -o executable/runMe.exe

test:
	$(CCP) library/sorting.cpp library/sorting.h test/test.cpp -o executable/runMe.exe

random:
	$(CCP) library/sorting.cpp library/sorting.h test/random.cpp -o executable/runMe.exe

run:
	./executable/runMe.exe

prof:
	$(CCP) -pg library/sorting.cpp library/sorting.h test/random.cpp -o executable/runMe.exe
	./executable/runMe.exe
	gprof executable/runMe.exe  gmon.out &gt; analysis.txt

