CCP=g++

compile:
	$(CCP) library/sorting.cpp library/sorting.h test/main.cpp -o executable/runMe.exe

test:
	$(CCP) library/sorting.cpp library/sorting.h test/test.cpp -o executable/runMe.exe

run:
	./executable/runMe.exe

prof:
	$(CCP) -pg library/sorting.cpp library/sorting.h test/test.cpp -o executable/runMe.exe
	./executable/runMe.exe
	gprof executable/runMe.exe  gmon.out | gprod2dot/gprof2dot.py | dot -Tpng -o output.png

