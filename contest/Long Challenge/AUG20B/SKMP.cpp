#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,p;
        cin>>s>>p;
        int freq_s[26]={};
        const int len_s = s.size();
        const int len_p = p.size();
        for(int i=0;i<len_s;i++){
            freq_s[s[i] - 'a']++;
        }
        for(int i=0;i<len_p;i++){
            freq_s[p[i] - 'a']--;
        }
        int index = p[0] - 'a', i;
        
        char ch;
        
            for(i=0;i<index;i++){
                ch = i + 'a';
                while(freq_s[i]>0){
                    printf("%c",ch);
                    freq_s[i]--;
                }
            }
            bool flag = false;
            for(int j=1;j<len_p;j++){
                if(p[j]<p[j-1]){
                    break;
                }
                else if(p[j]>p[j-1]){
                    flag = true;
                    break;
                }
            }
            if(!flag){
            cout<<p;
            for(i = index; i<26; i++){
                ch = i+'a';
                while(freq_s[i]>0){
                    printf("%c",ch);
                    freq_s[i]--;
                }
            }
            }
            else{
                ch = index+'a';
                while(freq_s[index]>0){
                    printf("%c",ch);
                    freq_s[index]--;
                }
                cout<<p;
                for(i = index+1; i<26; i++){
                    ch = i+'a';
                    while(freq_s[i]>0){
                        printf("%c",ch);
                        freq_s[i]--;
                    }
                }

            }

       printf("\n");

    }
    return 0;
}