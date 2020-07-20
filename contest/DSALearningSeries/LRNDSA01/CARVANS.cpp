#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int count = 1;
        for(int i=1;i<n;i++){
            if(s[i]<=s[i-1]){
                count++;
            }
            else{
                s[i] = s[i-1];
            }
        }
        cout<<count<<endl;

    }
    return 0;
}

