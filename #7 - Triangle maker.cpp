#include <iostream>

using namespace std;

int main()
{
    int n=15;
    int emptySpaces = n-1, filledSpaces = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<emptySpaces;j++){
            cout<<" ";
        }
        for(int j=0;j<filledSpaces;j++){
            cout<<"*";
        }
        cout<<endl;
        emptySpaces--;
        filledSpaces++;
    }
    return 0;
}
