CCP=g++

compile:
	$(CCP) sorting.cpp sorting.h main.cpp -o runMe.exe

test:
	$(CCP) sorting.cpp sorting.h test.cpp -o runMe.exe

run:
	./runMe.exe

