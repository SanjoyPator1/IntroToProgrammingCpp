
#include <iostream>

using namespace std;

int main()
{
    double firstNumber, secondNumber, thirdNumber, answer;
    
    cout<<"Enter your first number"<<endl;
    cin>> firstNumber;

    cout<<"Enter your second number"<<endl; 
    cin>> secondNumber;

    cout<<"Enter your third number"<<endl; 
    cin>> thirdNumber;
    
    answer = (firstNumber + secondNumber + thirdNumber)/ 3;
    
    cout<< "The answer is " << answer;

    return 0;
}
