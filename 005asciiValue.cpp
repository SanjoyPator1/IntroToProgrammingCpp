#include<iostream>

using namespace std;

int main(){

    char character;
    int answer;

    cout<<"Please enter a character"<<endl;
    cin>>character;

    answer = (int) character;

    cout<<"The ASCII value of your character - " << character <<" is " << answer <<endl;


    return 0;
}