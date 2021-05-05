#include <iostream>
#include <iomanip>
using namespace std;

void printHeader(int start, int end) {
    cout << setw(4) << " ";
    for (int firstrow = start; firstrow <= end; firstrow++) {
        cout << setw(3) << firstrow << " ";
    }
    cout << endl;
    cout << setw(4) << " ";
    for (int secondrow = start; secondrow <= end; secondrow++) {
        cout << "----";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int start;
    int end;
    int CC;
tryAgain:
    cout << " " << endl;
    cout << "Введите систему счисления (8 - Восьмеричная, 10 - десятичная, 16 - шестнадцатеричная): " << endl;
    cin >> CC;
    cout << "Введите начальный индекс (целое число): " << endl;
    cin >> start;
    cout << "Введите конечный индекс (целое число): " << endl;
    cin >> end;
    for (int i = start; i <= end; i++) {
        if (i == start) {
            printHeader(start, end);
        }
        for (int j = start; j <= end; j++) {
            if (j == start) {
                cout << setw(3) << i << "|";
            }
            if (CC == 8)
            {
                cout << setw(3) << oct << (i * j) << " ";
            }
            else
            {
                if (CC == 10)
                {
                    cout << setw(3) << dec << (i * j) << " ";
                }
                else
                {
                    if (CC == 16)
                    {
                        cout << setw(3) << uppercase << hex << (i * j) << " ";
                    }
                }
            }
        }
        cout << endl;
    }
    goto tryAgain;
    return 0;
};