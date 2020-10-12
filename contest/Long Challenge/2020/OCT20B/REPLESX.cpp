#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef uint64_t ll;


int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        ll n,x,p,k;
        cin>>n>>x>>p>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        
        //vector<ll> orig = a;
        vector<ll> sorted = a;
        sort(sorted.begin(),sorted.end());
       
        int moves = -1 ;
        if(sorted[p-1] == x) moves = 0; //1st
        else if(k>p && sorted[p-1] < x){ //2nd
            moves = -1;
        }
        else if(k>=p && sorted[p-1] > x){ //3rd
            moves = 0;
            for(ll i=p-1; i>=0 && sorted[i]>x; i--){
                moves++;
                if(i==0) break;
            }
        }
        else if(k<p && sorted[p-1]>x){ //4th
            moves = -1;
        }
        else if(k<=p && sorted[p-1]<x){ //5th
            moves = 0;
            for(ll i = p-1; i<n && sorted[i]<x; i++){
                moves++;
                if(i == (n-1)) break;
            }
        }

        cout<<moves<<endl;

    }
	return 0;
}
