#include<iostream>

using namespace std;

int main(){

    char lowerChar , upperChar;

    cout<<"Please enter a  upper Case character"<<endl;
    cin>>upperChar;

    lowerChar = upperChar + 32;

    cout<<"The lower case value of your character - " << upperChar <<" is " << lowerChar <<endl;


    return 0;
}