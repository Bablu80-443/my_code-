#include<iostream>
using namespace std;
int main()
{ 
//    int a[10] = {1,2,3,231,124123,243,12321,213,12,3};

    int a[5];


    //appending all element from user input


    for (size_t i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    

//    for (int i=0;i<10;i++)
// {   cin>> a[i];
//    cout<< a[5] ;}

    // cout << a[5];

    cout << a[3];

    cout << "starting output";

    //priting all element of arrray
    for (size_t i = 0; i < 5; i++)
    {
        cout << a[i] << "\n";
    }
    
   return 0;

};