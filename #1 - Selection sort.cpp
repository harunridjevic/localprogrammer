#include <iostream>

using namespace std;

int main()
{
    bool changer = 0;
    int n;
    int helper;
    int loc=0;
    int smallest, smallestLoc;
    cin>>n;
    int arr[n];
    
    //init
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    
    //selection sort
    while(1){
    changer = 0;
    smallest = arr[loc];
    for(int i=loc;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            smallestLoc=i;
            changer = 1;
        }
    }
    if(loc==n-1)
        break;
    helper = arr[loc];
    arr[loc] = smallest;
    arr[smallestLoc] = helper;
    loc++;
    }
    //writeout
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}