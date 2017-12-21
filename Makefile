build: main.o
	mkdir -p bin
	g++ -o bin/plump *.o
	rm *.o
