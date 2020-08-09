#include<iostream>
using namespace std;

int func(int p){
    int r = p%9;
    int q = p/9;
    int digits = q;
    if(r>0) digits++;
    return digits;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int pc,pr;
        cin>>pc>>pr;
        int d_chef = func(pc);
        int d_rick = func(pr);

        if(d_chef == d_rick){
            cout<<1<<" "<<d_rick<<endl;
        }
        else if(d_chef<d_rick){
            cout<<0<<" "<<d_chef<<endl;
        }
        else if(d_rick<d_chef){
            cout<<1<<" "<<d_rick<<endl;
        }

    }
    return 0;
}