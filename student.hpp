#include <string>

using namespace std;

#ifndef STUDENT_HPP
#define STUDENT_HPP
class student{
	private:
	   string fname;
	   string lname;
	   int id;
	   float gpa;
	   int completedcredits;
	   int standing;
	public:
	   student();
	   string get_fname();
	   void set_fname(string);
	   string get_lname();
	   void set_lname(string);
	   int get_id();
	   void set_id(int);
	   float get_gpa();
	   void set_gpa(float);
	   int get_completedcredits();
	   void set_completedcredits(int);
	   int get_standing();
	   void set_standing();



};
#endif
