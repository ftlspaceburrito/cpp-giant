# makefile for cppgiant

cppgiant: main.cpp shell.cpp parser.cpp
	g++ main.cpp shell.cpp parser.cpp -o cppgiant
