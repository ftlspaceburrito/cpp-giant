// cppgiant
// input parser
// it's a bit messy but it'll do for now.

#include <stdio.h>
#include <iostream>
#include "main.h"

int parser()
{
	if(command=="about")
		about();
	else if(command=="hcf")
		hcf();
	else if(command=="help")
		help();
	// else if(command=="play")
	//	play();
	// not implemented yet...
	else if(command=="write")
		write();
	else
		error();
	return 0;
}