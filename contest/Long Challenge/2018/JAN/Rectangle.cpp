#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int a[4]={0};
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        bool flag = true;
        sort(a,a+4);
        for(int i=0;i<4;i+=2){
            if(a[i]!=a[i+1]){
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}