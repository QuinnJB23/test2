//10 points
//Rewrite the following using a vector in place of the variable array

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <char> array(10);	

	for (int x = 0; x< sizeof(array)/sizeof(char); x++)
		array[x] = 'a' + x; 
	
	for (int x = 0; x<10; x++)
		cout << array[x];
		
	cout << "\n";
}
