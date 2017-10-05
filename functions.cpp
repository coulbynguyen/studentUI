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
   input.close();

}

int check_id(student* enrolled, int a){
   int num;
   bool notvalid = true;
   while(notvalid){
      cout << "ENTER YOUR ID" << endl;
      cin >> num;
      for(int i = 0; i < a; i++){
	 if(enrolled[i].get_id() == num){
	    cout << "welcome: " << enrolled[i].get_fname() << " " << enrolled[i].get_lname() << endl;
	    return i;
	 }
      }
      cout << "YOU DID NOT ENTER A VALID ID" << endl;
   }

}

void display_student(int id, student *enrolled){
   enrolled[id].display_all();

}

void menu(int id, student* enrolled, int a){
   int num;
   cout << "STUDENT OPTIONS:" << endl;
   cout << "ENTER 0: To Display All Your Information" << endl;
   cout << "ENTER 1: To Display Your Class Standing and GPA" << endl;
   cout << "ENTER 2: To Add Credits and update GPA" << endl;
   cout << "ENTER 3: To Predict What Your GPA will be with unfinalized grades" << endl;
   cout << "ENTER 4: To Change Your Name" << endl;
   cin >> num;
   if(num == 0){
      display_student(id, enrolled);
   }
   //call display all
   else if(num == 1){}
   //call display class standing and GPA
   else if(num == 2){}
   //call appendgpa
   else if(num == 3){}
   //call checkgpa
   else if(num == 4){}
   //call change name
   else
      cout << "YOU HAVE ENTERED AN INCORRECT OPTION" << endl;

}
