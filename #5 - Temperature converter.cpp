#include <iostream>

using namespace std;

int main()
{
    double temperature,choice;
    
    cout<<"From what format do you want to convert the temperature?(Type in number and press enter)"<<endl;
    cout<<"1. From Farenheint to Celsius."<<endl;
    cout<<"2. From Celsius to Farenheit."<<endl;
    cin>>choice;
    cout<<"What is the temperature?";
    cin>>temperature;
    if(choice == 1){
        temperature = (temperature - 32) * 0.5556;
    }
    else{
        temperature = temperature * 1.8 + 32;
    }
    cout<< "Final temperature is "<<temperature;
    return 0;
}
