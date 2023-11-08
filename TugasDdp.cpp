#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int k;
    cout<<"NAMA : MUHAMMAD ZIDANE HABIBIE HENDRIANSYAH"<<endl;
    cout<<"NIM  : 2300018003"<<endl;
    cout<<"KELAS: A"<<endl;
    cout<<"===================================================="<<endl;
	cout<<"||             BASIC PROGRAMMING TASK             ||"<<endl;
	cout<<"===================================================="<<endl;
    cout<<"Enter the Number of Line and Rows: ";
    cin>> k;

    while (k < 0) {
        cout << "\n Invalid Number of Line, Enter the Number of Line and Rows: ";
        cin >> k;
    }
    for (int p = 0; p <= (k*k); p++) {
        for (int q = 0; q <= (k*k); q++) {
            if (p == 0 || (p % k == 0) || (q == 0) || (q % k == 0)) {
                cout <<setw(2) << "[]";
            } else {
                cout <<setw(2) << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}
