#include <iostream>
#include <string>
using namespace std;

int arr[20];    //deklarasi variable global array a dengan ukuran 20
int n;          //deklarasi variable global n untuk menyimpan banyaknya elemen pada array

void input() //prosedur untuk input
{
    while (true) {
        cout << "Masukkan banyaknya elemen pada array:";
        cin >> n;
        if (n <= 20)
            break;
        else{
            cout << "\nArray dapat mempunyai maksimal 20 elemen";
        }
            
    }

    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i=0; i<n; i++)
    {
        cout << "Data ke-" << (i+1) << "i";
        cin >> arr[i];
    }
}
