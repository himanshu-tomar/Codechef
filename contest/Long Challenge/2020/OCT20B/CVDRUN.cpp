#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
        vector<int> cities;
        int next=(x+k)%n, current=x;
        cities.push_back(current);
	    while(true){
            if(cities[0] != next){
                cities.push_back(next);
                current = next;
                next = (current+k) % n;
            } 
            else break;
        }
        int m=cities.size();
        bool flag = false;
        for(int i=0;i<m;i++){
            if(cities[i] == y){
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
	}
	return 0;
}
