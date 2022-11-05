#include <iostream>
using namespace std;
int main(){
    double num1,num2;
    char operation;
    cout<<"Type in the expression"<<endl;
    cin>>num1>>operation>>num2;
    switch(operation){
        case '+':
            cout<<num1+num2;
        break;
        case '-':
            cout<<num1-num2;
        break;
        case '*':
            cout<<num1*num2;
        break;
        case '/':
            cout<<num1/num2;
        break;
    }
}