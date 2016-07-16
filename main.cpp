// cpp-giant
// Simulates the Cardiff Giant from the AMC series "Halt and Catch Fire"
// Copyright 2016 Sputnik Stardust

#include <stdio.h>
#include <iostream>
#include "main.h"

std::string username;
int status;

int main()
{
	init();
	shell();
	return 0;
}

// initialization function
int init()
{	
	/* get username */
	std::cout << "What is your name?" << std::endl;
	std::cout << "> ";
	std::cin >> username;
	return 0;
}

// error handling
int error()
{
	std::cout << "Sorry, I didn't recognize that command." << std::endl;
	return 0;
}