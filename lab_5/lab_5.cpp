
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
	ifstream inf("C:\\ttt.txt");
	ofstream outf("C:\\rrr.txt");
	inf.seekg(0, ios::end);
	const int fsize = inf.tellg();
	inf.seekg(0, ios::beg);
	char* buf = new char[fsize];
	float* buf2 = new float[fsize];
	inf.read(buf, fsize);
	int i = 0;
	for (i = 0; i < fsize; i++)
	{
		buf2[i] = 1 / ((float)buf[i]);
		cout << buf2[i] << endl;
	}
	outf.write((char*)buf2, fsize);
	inf.close();
	outf.close();
	delete[] buf;
	delete[] buf2;
	return 0;
}

