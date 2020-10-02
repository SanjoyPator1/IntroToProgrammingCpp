#include<iostream>

using namespace std;

int main(){

    char lowerChar , upperChar;

    cout<<"Please enter a  lower Case character"<<endl;
    cin>>lowerChar;

    upperChar = lowerChar - 32;

    cout<<"The upper case value of your character - " << lowerChar <<" is " << upperChar <<endl;


    return 0;
}