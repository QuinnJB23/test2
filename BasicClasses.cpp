//25 points
//Complete the class constructors based on the driver - 15 pts
//Create a destructor OUTSIDE OF THE CLASS OBJECT that will print "object destroyed" - 5 pts
//Create default values of Ron, 3, 2 - 5 pts

/*
   Output should look like this: 

   Harry 1 2
   Hermione 2 4
   Ron 3 2
   */

#include <iostream>

using namespace std;

//Class declaration
class Student 
{
	private:

	public:
		string name;
		int id; 
		double gpa;

		Student(string name="Ron", int id=3, double gpa=2):name(name), id(id), gpa(gpa) {}

		void print(){cout << name << " " << id << " " << gpa << endl;}

	~Student() {cout <<"object destroyed" << endl;}
};


int main()
{
	Student s1("Harry", 1);
	Student s2 ("Hermione", 2, 4.0);
	Student s3;

	s1.print();
	s2.print();
	s3.print();
}
