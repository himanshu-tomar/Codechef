#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N; cin>>N;
        int L[N];
        int num = -1;
        for(int i=0;i<N;i++) cin>>L[i];
        int G[N];
        for(int i=0;i<N;i++) cin>>G[i];
        bool a[2] = {true,true}; 
        for(int i=0,j=N-1;i<N && j>=0;i++,j--){
            if(L[i]>G[i]){
                a[0] = false;
            }
            if(L[i]>G[j]){
                a[1] = false;
            }
        }
        if(a[0] == true and a[1] == true) cout<<"both"<<endl;
        else if(a[0] == false and a[1] == false) cout<<"none"<<endl;
        else if(a[0] == true and a[1] == false) cout<<"front"<<endl;
        else if(a[0] == false and a[1] == true) cout<<"back"<<endl;       
        
    }
    return 0;
}