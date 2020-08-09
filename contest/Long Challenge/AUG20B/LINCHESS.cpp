#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,temp;
        cin>>n>>k;
        vector<int> p; 
        for(int i=0;i<n;i++){
            cin>>temp;
            p.push_back(temp);
        }
        int min = INT_MAX;
        int result=-1;
        for(int i=0;i<n;i++){
            if(k%p[i]==0){
                temp=k-p[i];
                temp = temp/p[i];
                if(temp<min){
                    min = temp;
                    result = p[i];
                }       
            }
        }
        cout<<result<<endl;

    }
    return 0;
}