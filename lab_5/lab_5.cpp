#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int array1[10];
    cout << "Enter elementi massiva: " << endl;
    int sum = 0;
    for (int counter = 0; counter < 10; counter++)
        cin >> array1[counter];
    cout << "oct" << "\t"
        << "dec" << "\t"
        << "hex" << "\t" << endl;
    for (int counter = 0; counter < 10; counter++)
        cout << oct << array1[counter] << "\t"
        << dec << array1[counter] << "\t" << uppercase
        << hex << array1[counter] << "\t" << endl;
    system("pause");
    return 0;
};