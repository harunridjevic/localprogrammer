#include <iostream>

using namespace std;

int main()
{
    //init
    int n;
    cin>>n;
    int arr[n];
    int helper;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    //insertion sort
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            int loc = i;
            while(loc>0){
                if(arr[loc]<arr[loc-1])
                    swap(arr[loc],arr[loc-1]);
                loc--;
            }
        }
    }
    
    //writeout
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}