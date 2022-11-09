#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i]; 
  }
  int change = 0;
  
  do{
    change=0;
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
       int help = arr[i];
       arr[i] = arr[i+1];
       arr[i+1] = help;
       change = 1; 
      }
    }
  }while(change);
  
  for(int i=0;i<n;i++){
   cout<<arr[i]<<" "; 
  }
 return 0; 
}
