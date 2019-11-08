//25 points
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//read in the text file in.txt replace all chars == 0 and replace them with a space
	//create file called out.txt with changes

	ifstream inf("in.txt"); //in file stream

	if (!inf)
	{cerr <<"unable to open file for reading!" << endl; exit(1);}

	char temp;

	ofstream outf("out.txt");

	if (!outf)
	{
		cerr << "unable to open file for writing!" << endl;
		exit(1);
	}

	while (inf >> temp)
	{
		if( temp != '0')
		{
			outf << temp;
		} else
		{
			outf << " ";
		}
	}

}
