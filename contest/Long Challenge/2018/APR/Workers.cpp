#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
        int n; cin>>n;
        int c[n];
        for(int i=0;i<n;i++) cin>>c[i];
        int t[n];
        for(int i=0;i<n;i++) cin>>t[i];

        int cost1 = 100'001, cost2 = 100'001, cost3 = 100'001;
        for(int i=0;i<n;i++){
            if(t[i] == 1){
                if(c[i]<cost1) cost1 = c[i];
            }
            if(t[i] == 2){
                if(c[i]<cost2) cost2 = c[i];
            }
            if(t[i] == 3){
                if(c[i]<cost3) cost3 = c[i];
            }
        }
        cout<<min(cost3, (cost1+cost2))<<endl;       
        
    
    return 0;
}