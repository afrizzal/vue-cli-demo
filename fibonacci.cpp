#include <iostream>

using namespace std;

int main()
{
    int n;
    int f_n;
    int f_n1;
    int f_n2;

    count <<"Masukkan nilai ke-n: ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    count << f_n << "";
    for (int i = 1; i < n; i++)
    {
       f_n = f_n1 + f_n2;
       f_n2 = f_n1;
       f_n1 = f_n;
       count << f_n << "";
    }
    count << "\n";
    
    cin.get();
    return 0;
}