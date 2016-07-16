// cpp-giant
// shell and assorted commands

#include <stdio.h>
#include <iostream>
#include "main.h"

std::string command;

int shell()
{
	std::cout << "What would you like to do, " << username << "?" << std::endl;
	std::cout << "> ";
	std::cin >> command;
	if(command=="exit" or command=="quit")
		return 0;
	else
		parser();
	return 0;
}

int about()
{
	std::cout << "this will be an about page." << std::endl;
	return 0;
}

int hcf()
{
	std::cout << "this is an easter egg" << std::endl;
	return 0;
}

int help()
{
	std::cout << "help page" << std::endl;
	return 0;
}

int write()
{
	std::cout << "this will open a text editor" << std::endl;
	return 0;
}