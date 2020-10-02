#include <iostream>

using namespace std;

int main(){

    //variable declaration
    double areaOfCircle, radiusOfCircle;

    //constant declaration
    const double pi = 3.14;

    //user input
    cout<<"Please enter the radius of the circle"<<endl;
    cin>>radiusOfCircle;

    areaOfCircle = pi * radiusOfCircle * radiusOfCircle;

    cout<<"Area of the circle is - "<< areaOfCircle <<endl;


    return 0;
}