#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,M,X,K;
        cin>>N>>M>>X>>K;
        string S;
        cin>>S;
/*
        if(M<N){
            cout<<"no"<<endl;
            continue;
        }
        
*/
        int o=0, e=0;
        for(int i=0;i<K;i++){
            if(S[i]=='O') o++;
        }
        e = K-o;

        int64_t patentsDone=0;
        for(int i=1;i<=M;i++){
            if(patentsDone >= N) break;
            if(i%2==1){
                if(X>=o and o>0){
                    patentsDone += o;
                    o = 0;
                }
                else if(X<o){
                    patentsDone += X;
                    o-=X;
                }
                 
            }
            else{
                if(X>=e and e>0){
                    patentsDone += e;
                    e=0;
                }
                else if(X<e){
                    patentsDone += X;
                    e-=X;
                }
            }
            
            
            
        }
        

        if(patentsDone >= N) cout<<"yes\n";
        else cout<<"no\n";


        
    }
    return 0;
}