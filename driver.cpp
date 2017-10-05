#include <iostream>
#include "student.hpp"
#include <fstream>
#include "functions.hpp"
using namespace std;

int main(){
   fstream input;
   string str;
   int a,z;
   float x;
   input.open("students.txt");
   student* enrolled;
  
   input >> a;
   enrolled = new student[a];
   set_enrolled(enrolled, a, input);
   z = check_id(enrolled, a);
   menu(z, enrolled, a);
   delete [] enrolled;
   return 0;

}
