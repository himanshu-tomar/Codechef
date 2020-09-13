#include<iostream>
#include<cmath>
using namespace std;
 
uint64_t remaining(uint64_t n){
    return (n*(n-1))/2;
}

uint64_t newLogic(uint64_t n){
    uint64_t Sn=(n*(n+1))/2;
    uint64_t result=0;
    if(Sn%2 != 0) result=0;
    else{
        double d=((sqrt(1+4*Sn))-1.0)/2.0;
        //cout<<"d="<<d;
        double fractpart,intpart;
        fractpart=modf(d,&intpart);
        //cout<<", f = "<<fractpart<<", intpart="<<intpart;
        uint64_t i=static_cast<uint64_t>(d);
        //cout<<", i = "<<i<<endl;;
        if(fractpart==0){
            result=remaining(i)+remaining(n-i);
        }
    
        result+=n-i;
    }

return result;
}

int main()
{
int t;
cin>>t;

while(t--)
{
    uint64_t n;
    cin>>n;
    uint64_t result = newLogic(n);

    cout<<result<<endl;


}
} 