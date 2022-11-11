//tasty decisions
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,y;
        cin>>x>>y;
        x*=2;
        y*=5;
        if(x<y)
            cout<<"Candy"<<endl;
        else if(y<x)
            cout<<"Chocolate"<<endl;
        else
            cout<<"Either"<<endl;
        t--;
    }
}
