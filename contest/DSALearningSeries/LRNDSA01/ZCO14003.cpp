#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    long long int arr[n]={}, max=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int rev = 0;
    for(int i=0;i<n;i++){
        rev = (n-i) * (arr[i]);
        if(rev > max) max = rev;
    }
    cout<<max<<endl;
    return 0;

}
