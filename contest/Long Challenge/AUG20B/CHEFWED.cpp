#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    short t;
    cin>>t;
    while(t--){
        short n,k;
        cin>>n>>k;

        vector<short> freq(101);
        vector<bool> fighting(101);
        vector<short> f(n);
        for(short i=0;i<n;i++){
            cin>>f[i];
           // freq[f[i]]++;
        }
        short c=0, k2=k*2;
        short final_result = k;
        if(k==1){
            short result = k;
            for(short i=0;i<n;i++){
                freq[f[i]]++;
                if(freq[f[i]] > 1){
                    result+=k;
                    fill(freq.begin(),freq.end(),0);
                    i--;
                }
                //cout<<i<<"--"<<f[i]<<"--"<<freq[f[i]]<<"--"<<result<<endl;
            }
            final_result = result;
        }
        if(k>1){
            short result1 = k;
            short old_c=0;
        for(short i=0;i<n;i++){

            freq[f[i]]++;
            //cout<<"i = "<<i<<", freq["<<f[i]<<"] = "<<freq[f[i]]<<endl;
            if(freq[f[i]]>1){
                if(!fighting[f[i]]){
                    old_c = c;
                    c+=2;
                    fighting[f[i]] = true;
                    //cout<<"1st IF -- c="<<c<<endl;
                }
                else if(fighting[f[i]]){
                    old_c = c;
                    c++;
                    //cout<<"2nd IF -- c="<<c<<endl;
                }
                if((c+k)>=k2){
                    //cout<<"3rd IF -- old_c = "<<old_c;
                    fill(freq.begin(),freq.end(),0);
                    c=0;
                    result1+=k;
                    result1+=old_c;
                    fill(fighting.begin(),fighting.end(),false);
                    //cout<<", result1 = "<<result1<<" -- fighting of "<<f[i]<<" : "<<fighting[f[i]]<<endl;
                    i--;
                }
            }
        }
        if(c>0) result1+=c;
        final_result = result1;
        short result2 = k;
        c=0;
        fill(freq.begin(),freq.end(),0);
        for(short i=0;i<n;i++){
        freq[f[i]]++;
            cout<<"i = "<<i<<", freq["<<f[i]<<"] = "<<freq[f[i]]<<endl;
            if(freq[f[i]]>1){
                if(!fighting[f[i]]){
                    //old_c = c;
                    c+=2;
                    fighting[f[i]] = true;
                    cout<<"1st IF -- c="<<c<<endl;
                }
                else if(fighting[f[i]]){
                    //old_c = c;
                    c++;
                    cout<<"2nd IF -- c="<<c<<endl;
                }
            }
        }
        result2 +=  c;
        
        if(result2<result1)
            final_result = result2;
        }
        
        cout<<final_result<<endl;
       
    }
    return 0;
}