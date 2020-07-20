#include<iostream>
#include<string>
using namespace std;	
	
int main(){
	int t;
	cin>>t;
	while(t--){
		int g; cin>>g;
		while(g--){
			int i,n,q;
			cin>>i>>n>>q;
			int h,t;
			if(n&1){
				if(i==1){
					h = n/2;
					t = h+1;
				}else{
					t = n/2;
					h = t+1;
				}
			}
			else{
				h = n/2;
				t = n/2;
			}
			if(q==1) cout<<h<<endl;
			else cout<<t<<endl;
		}
	}
	return 0 ;
}