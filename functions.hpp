#include <iostream>
#include <fstream>
#include "student.hpp"

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

void set_enrolled(student*, int, fstream &);
int check_id(student*, int);
void menu(int, student*, int);
#endif
