user_main: user_main.o user.o
	g++ main.o user.o -o main

user_main.o: user_main.cpp
	g++ -c user_main.cpp

user.o: user.cpp
	g++ -c user.cpp

clean:
	rm *.o user_main