#include<iostream>
#include<algorithm>
using namespace std;

bool sort_substring(string str){
    
    sort(str.begin(),str.end());
    
    if (str == "cefh")
        return true;

    return false;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int len = s.size();
        
        int count=0;
        for(int i=0;i<len-3;i++){
            if(sort_substring(s.substr(i,4))) count++;
            
        }
        
        if(count>0)
            cout<<"lovely "<<count<<endl;

        else cout<<"normal"<<endl;
        
    }
    return 0;
}