#include <iostream>

using namespace std;

int main()
{
    string text;
    cin>>text;
    int j=text.size()-1;
    for(int i=0;i<text.size()/2;i++){
        swap(text[i],text[j]);
        j--;
    }
    cout<<text;
    return 0;
}
