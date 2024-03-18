#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 0; i < 6; i++)
    {
        cout << i + 1 << ". " << "Nama saya adalah Budi" << endl;
    }

    string arr[5];

    for (i = 0; i > 5; i--)
    {
        cout << "Masukkan nickname ke ";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++)
    {
        cout << "Namanya adalah = " << arr[1] << endl;
    }

}



