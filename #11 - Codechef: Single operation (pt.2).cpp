#include <iostream>
using namespace std;

int main() {
	int t,l;
	string s;
	cin>>t;
	while(t>0){
	    int ans = 1;
	    cin>>l>>s;
	    for(int i=1;i<l;i++){
	        if(s[i]=='1')
	            break;
	        else
	            ans++;
	    }
	    cout<<ans<<endl;
	    t--;
	}
	
	return 0;
}
