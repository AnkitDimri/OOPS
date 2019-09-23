state: lab1.o
	g++ lab1.o -o state
lab1.o: lab1.cpp
	g++ -c lab1.cpp function.h nation.h state.h
clean:
	rm *.o state
