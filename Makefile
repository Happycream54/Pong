all: compile link

compile:
	
	g++ -I src/include -c testing.cpp
	g++ -I src/include -c menu.cpp
link:
	
	g++ testing.o -o testing -L src/lib -l sfml-graphics -l sfml-window -l sfml-system
	g++ menu.o -o menu -L src/lib -l sfml-graphics -l sfml-window -l sfml-system