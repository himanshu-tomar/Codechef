#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T; cin>>T;
    while(T--){
        int N; cin>>N;
        int S[N]={0};
        for(int i=0;i<N;i++) cin>>S[i];

        int count=0;
        int temp;
        for(int i=1;i<N;i++){
            temp = S[i]-S[i-1];
            if(temp<0)  temp*=-1;
            temp--;
            count+=temp;
        }
        cout<<count<<endl;
    }
	return 0;
}

