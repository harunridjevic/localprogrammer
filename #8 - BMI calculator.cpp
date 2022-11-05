#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double weight, height, bmi;
    cin>>weight>>height;
    cout<<"Your BMI value is: "<<endl;
    bmi=weight/pow(height,2);
    cout<<bmi;

    return 0;
}
