#include "student.hpp"

student::student(){
   fname = "";
   lname = "";
   id = 0;
   gpa = 0;
   completedcredits = 0;
   standing = 1;
}

string student::get_fname(){
	return fname;
}

void student::set_fname(string s){
	fname = s;
}

string student::get_lname(){
	return lname;
}

void student::set_lname(string s){
	lname = s;
}

int student::get_id(){
	return id;
}

void student::set_id(int num){
	id = num;
}

float student::get_gpa(){
	return gpa;
}

void student::set_gpa(float num){
	gpa = num;
}

int student::get_completedcredits(){
	return completedcredits;
}

void student::set_completedcredits(int num){
	completedcredits = num;
}

int student::get_standing(){
	return standing;
}

void student::set_standing(){
	standing = (completedcredits%45)+1;
}

void student::display_all(){
	cout << fname << " " << lname << " " << id << " " << gpa << " " << completedcredits << " " << standing << endl;
}
