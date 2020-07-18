#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N,r;
	cin>>N>>r;
	int R;
	while(N--){
	    cin>>R;
	    if(R>=r) cout<<"Good boi\n";
	    else cout<<"Bad boi\n";
	}
	return 0;
}
