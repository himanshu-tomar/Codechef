#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        int len = str.length();
        bool flag = false;
        for(int i=len-1;i>=0;i--){
            if(!flag && str[i] == '0'){
                continue;
            }
            flag = true;
            cout<<str[i];
        }
        cout<<endl;

    }
    return 0;

}
