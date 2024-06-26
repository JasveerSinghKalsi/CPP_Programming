user_main: user_main.o user.o teacher.o
	g++ user_main.o user.o teacher.o -o user_main

user_main.o: user_main.cpp
	g++ -c user_main.cpp

user.o: user.cpp
	g++ -c user.cpp

teacher.o: teacher.cpp
	g++ -c teacher.cpp

clean:
	rm *.o user_main