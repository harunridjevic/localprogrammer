#include <iostream>

using namespace std;

int main()
{
    
    //init
    srand(time(0));
    string name = "";
    string syllables[] ={"mon","gi","tue","sal","li","fay","shi","zag","blarg","rash","izen"};
    int length = 3;
    
    //generator
    for(int i = 0; i<length;i++){
        int randomizer = rand() % 7 + 1;
        name+=syllables[randomizer];
    }
    
    cout<<name;
    return 0;
}
