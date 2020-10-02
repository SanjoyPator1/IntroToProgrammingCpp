#include<iostream>

using namespace std;

int main(){

    //swap using temporary variable;

    int FirstNumber , SecondNumber , temp;

    cout<<"Enter the 1st No - "<<endl;
    cin>> FirstNumber;

    cout<<"Enter the 2nd No - "<<endl;
    cin>> SecondNumber;

    //swap
    temp = FirstNumber;

    FirstNumber = SecondNumber;

    SecondNumber = temp;

    cout<<"After swaping"<<endl;
    cout<<"The value in First Number is -  "<<FirstNumber<<endl;
    cout<<"The value in Seconnd Number is -  "<<SecondNumber<<endl;



    return 0;
}