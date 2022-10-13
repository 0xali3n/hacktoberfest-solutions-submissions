#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	    int f=0,cnt=0;
	    int n;
	    string s;
	    cin>>n>>s;
        cout<<s[0];
	    for(int i=0;i<n;i++){
	        if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u'){
	            cnt++;
	        }
	        if(cnt>=4){
	            f=1;
	            break;
	        }
	    }
	    if(f==1){
	        cout<<"NO"<<endl;
	    }else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}