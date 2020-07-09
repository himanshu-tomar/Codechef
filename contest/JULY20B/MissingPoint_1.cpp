#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(vector<int> v)
{
    int len = v.size();
    for(int i=0;i<len-1;i+=2){
        if(v[i] != v[i+1] && i!=(len-1))
            return v[i];
    }


    return v[len-1];
}

int main()
{
    int T; cin>>T;
    while(T--){
        int N;
        cin>>N;
        int p = (4*N)-1;

        vector<int> x(p);
        vector<int> y(p);

        for(int i=0;i<p;i++){
            cin>>x[i]>>y[i];
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int X,Y;
        X = func(x);
        Y = func(y);

        cout<<X<<" "<<Y<<endl;

    }
    return 0;
}
