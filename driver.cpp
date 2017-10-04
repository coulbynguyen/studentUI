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
   check_id(enrolled, a);
   /*for(int i = 0; i < a; i++){
      	input >> str;
	enrolled[i].set_fname(str);
	input >> str;
	enrolled[i].set_lname(str);
	input >> z;
	enrolled[i].set_id(z);
	input >> x;
	enrolled[i].set_gpa(x);
	input >> z;
	enrolled[i].set_completedcredits(z);
   	enrolled[i].set_standing();
   }*/
  /* for(int i = 0; i < a; i++){
	enrolled[i].display_all();
   }*/
   
   delete [] enrolled;
   return 0;

}
