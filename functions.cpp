#include "functions.hpp"
#include <string>

using namespace std;

void set_enrolled(student* enrolled, int a, fstream &input){
   int x;
   float z;
   string str;
   for(int i = 0; i < a; i++){
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
   }


}