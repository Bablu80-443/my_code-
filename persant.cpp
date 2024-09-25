#include<iostream>
using namespace std;
 int main (){
    float pen, pencil, eraser;
    cout<< "enter pen pencil and eraser prise";
    cin>> pen;
    cin>> pencil;
    cin>> eraser;

    float sum = pen + pencil + eraser;
    cout<< sum <<"\n";
    float finalPrise = sum*1.18;

    cout<<"finel prise is " << finalPrise;
    return 0;
 }