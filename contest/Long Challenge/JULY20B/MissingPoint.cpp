#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int func(map<int,int> m)
{
    int result,key,value;
    for (auto itr = m.begin(); itr != m.end(); ++itr){
        key = itr->first;
        value = itr->second;
        if(value%2 != 0){
            result = key;
            break;
        }
    }
    return result;
}

int main()
{
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        int p = (4*N)-1;
        map<int,int> x;
        map<int,int> y;
        int x_,y_;
        for(int i=0;i<p;i++){
            cin>>x_>>y_;

            if(x.count(x_)) x[x_]++;
            else x[x_]=1;

            if(y.count(y_)) y[y_]++;
            else y[y_]=1;
        }

        int X,Y;
        X = func(x);
        Y = func(y);

        cout<<X<<" "<<Y<<endl;

    }
    return 0;
}
