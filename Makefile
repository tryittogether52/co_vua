CC = g++

app: Main.o
	$(CC) -o app Main.o

Main.o: Main.cpp
	$(CC) -c Main.cpp
clean:
	-rm -f *.o app
