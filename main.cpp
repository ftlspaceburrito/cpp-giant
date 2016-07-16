/* cpp-giant
Simulates the Cardiff Giant from the AMC series "Halt and Catch Fire"
Copyright 2016 Sputnik Stardust <ftlspaceburrito@icloud.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#include <stdio.h>
#include <iostream>
#include "main.h"

std::string username;

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
