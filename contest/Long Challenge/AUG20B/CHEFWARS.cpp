#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,p;
        cin>>h>>p;
        bool flag = false;
        while(p>0 && h>0){
            h-=p;
            p/=2;
            if(h<=0){
                flag = true;
                break;
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}