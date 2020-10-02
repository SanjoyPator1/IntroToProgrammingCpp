#include<iostream>

using namespace std;

int main(){

    int FirstNumber, SecondNumber;

    cout<<"Enter the 1st No - "<<endl;
    cin>> FirstNumber;  // 10

    cout<<"Enter the 2nd No - "<<endl;
    cin>> SecondNumber;     // 5

    //swaping
    FirstNumber = FirstNumber + SecondNumber;       // 10 + 5 = 15

    SecondNumber = FirstNumber - SecondNumber;      // 15 - 5 = 10

    FirstNumber = FirstNumber - SecondNumber;       // 15 - 10 = 5


    cout<<"After swaping"<<endl;
    cout<<"The value in First Number is -  "<<FirstNumber<<endl;
    cout<<"The value in Seconnd Number is -  "<<SecondNumber<<endl;


    return 0;
}