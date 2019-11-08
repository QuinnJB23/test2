//10 points
//Have the user enter two int values and output the results of adding them
//Example

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int one = atoi(argv[1]);
	int two = atoi(argv[2]);
	cout << "Results = " << one + two;
	cout << endl;
}
