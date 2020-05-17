#include <iostream>
#include <fstream>

using namespace std;
fstream odczyt;
int licznik=0;
string a;
bool palindrom (string s1)
{
    int dl=s1.size();
    for (int i=0; i<dl/2; i++)
        if (s1[i]!=s1[dl-i-1])
            return false;
    return true;

}

int main()
{
    odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
    {
        odczyt >> a;
        if(palindrom(a)==true)
        {

            licznik++;
            cout << licznik <<". " << a << endl;
        }
    }
    cout<< endl;
    cout <<"Liczba palindromow wynosi: "  <<licznik << ".";
    odczyt.close();
    return 0;
}
