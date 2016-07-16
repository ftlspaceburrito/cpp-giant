// cppgiant header file

#ifndef MAIN_H
#define MAIN_H

//functions
int init();
int shell();
int parser();
int error();

//commands
int about();
int hcf();
int help();
int play();
int write();

//variables
extern std::string username;
extern std::string command;

#endif /* MAIN_H */