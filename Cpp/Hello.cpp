#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //multiplication table
    int i, j;
    cin >>i;
    cin >> j;
    char k;
    cin >> k;

    for (int in = 0; in <i; in++)
    {
        for (int jin = 0; jin < j; jin++)
        {
            cout<< setw(4) <<k;
        }
        cout << endl;
        }


    //system("pause>0");
   

}