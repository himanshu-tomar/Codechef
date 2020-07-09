#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> A(N);
        vector<int> B(N);
        for(int i=0;i<N;i++) cin>>A[i];
        for(int i=0;i<N;i++) cin>>B[i];
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());

        map<int,int> a;
        map<int,int> b;

        vector<int> a_;
        vector<int> b_;
        for(int i=0;i<N;i++){
            if(A[i]!=B[i]){
                a[A[i]]++;
                b[B[i]]++;
                a_.push_back(A[i]);
                b_.push_back(B[i]);
            }
        }

        if(a.empty()){          // For printing 0
            cout<<0<<endl;
            continue;
        }

        else{                   // For printing -1
            bool flag = true;
            for (auto itr = a.begin(); itr != a.end(); ++itr){
                int key = itr->first;
                if(a[key]%2 != 0){
                    cout<<-1<<endl;
                    flag = false;
                    break;
                }
                a[key]/=2;
            }
            if(!flag) continue;
            for (auto itr = b.begin(); itr != b.end(); ++itr){
                int key = itr->first;
                if(b[key]%2 != 0){
                    cout<<-1<<endl;
                    flag = false;
                    break;
                }
                b[key]/=2;
            }

            if(!flag) continue;
        }

        int cost = 0;

        sort(a_.begin(), a_.end(), greater<int>());
        int len = a_.size();
        for(int i=0;i<len;i++){
            cost+=min(a_[i],b_[i]);
        }

        cost/=2;


        cout<<cost<<endl;

    }
    return 0;
}
