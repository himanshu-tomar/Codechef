#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef uint64_t ll;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
        cin>>n>>k;
        vector<ll> q(n);
        for(ll i=0;i<n;i++){
            cin>>q[i];
        }
        ll carry=0,day=0,total=0;
        for(ll i=0;i<n;i++){
            day++;
            total = q[i] + carry;
            if(total < k){
                total=0;
                break;
            }
            else{
                total -= k;
                carry = total;
            }
        }
        if(total>0){
            day += (total/k) + 1;
        }

        cout<<day<<endl;


	}
	return 0;
}
