main: main.o funcs.o coord3d.h
	g++ -o main main.o funcs.o

tests: tests.o funcs.o coord3d.h
	g++ -o tests tests.o funcs.o



funcs.o: funcs.cpp funcs.h coord3d.h

main.o: main.cpp funcs.h coord3d.h

tests.o: tests.cpp doctest.h funcs.h coord3d.h

clean:
	rm -f main.o funcs.o tests.o
