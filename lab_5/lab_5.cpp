#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");

	ifstream inf("C:\\ttt.txt");

	if (!inf)
	{
		cerr << "Файл ненайден!" << endl;
		exit(1);
	}

	int c;

	while (inf)
	{
		inf >> c;

	}
	inf.close();

	ofstream outf("C:\\rrr.txt");

	if (!outf)
	{
		cerr << "Файл ненайден!" << endl;
		exit(1);
	}

	outf << c;

	return 0;
};