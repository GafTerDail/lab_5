#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");

	ifstream inf("C:\\data_v5.txt");

	if (!inf)
	{
		cerr << "Файл ненайден!" << endl;
		exit(1);
	}

	int i = 0;
	double c, s = 0.0;

	while (!inf.eof())
	{
		inf >> c;
		s += c;
		i++;
	}
	inf.close();
	cout << s / i;

	return 0;
};
