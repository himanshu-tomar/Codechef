#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    int t,len;
    cin>>t;
    while(t--){
        string str="",str1="",str2="";
        short c1[26]={}, c2[26]={};
        cin>>str;
        len = str.size(); 
        if(len&1){
            str1 = str.substr(0,len/2);
            str2 = str.substr((len/2)+1);
        }
        else{
            str1 = str.substr(0,len/2);
            str2 = str.substr(len/2);
        }
//cout<<"--"<<str1;
//cout<<"--"<<str2<<endl;
        len = str1.size();
        for(int i=0;i<len;i++) c1[str1[i] - 'a']++;
        for(int i=0;i<len;i++) c2[str2[i] - 'a']++;
/*for(int i=0;i<26;i++){
    cout<<c1[i]<<"\t"<<c2[i]<<endl;
}*/
        bool flag = true;
        for(int i=0;i<26;i++){
            if(c1[i] != c2[i]){
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;

}
