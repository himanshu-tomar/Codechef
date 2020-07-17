#include<iostream>
#include<map>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int x[n] = {0};
        for(int i=0;i<n;i++) cin>>x[i];

        map<int,int> m;
        for(int i=0;i<n;i++){
            m[x[i]]++;
        }
        double n_ = static_cast<double>(n);
        double p = (static_cast<double>(m[a])/n_) * (static_cast<double>(m[b])/n_);

        cout<<setprecision(7)<<p<<endl;
    }
    return 0;
}
