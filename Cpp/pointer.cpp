#include <stdio.h>
#include <iostream>
using namespace std;

int myData[5] = {1,2,3,4,5};
int* p = myData;         //same as -> int* p = myData;

// int cycle = 5;

int main()
{
    int length = sizeof(myData)/sizeof(myData[0]);
    cout<<"length is: " <<length <<endl;
    // for(int i = 0; i < length; i++)
    // {
    //     //create cin[i] and cout
    //     cout<<"Enter p" <<p[i] <<" number:" << endl;
    //     cin>>p[i];
        
    //     cout<<"You entered: " << p[i] << endl;
    //     cout<<"" <<endl;
        
    // }

    for(int i = 0; i < length; i++)
    {
        cout<<"myData [" <<i <<"] is : " <<p[i]  <<endl; // &p[i] is the address of the element
    }

return 0;
}