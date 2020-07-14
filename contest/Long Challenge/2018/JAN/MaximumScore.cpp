#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N; cin>>N;
        int64_t A[N][N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>A[i][j];
            }
        }
        for(int i=0;i<N;i++){
            sort(A[i], A[i]+N);
        }

        int64_t sum = A[N-1][N-1];
        int64_t max = A[N-1][N-1];
        bool flag = true;
        for(int i=N-2; i>=0; i--){
            for(int j=N-1;j>=0 && flag ;j--){
                if(A[i][0] < max){
                    if(A[i][j] < max ){
                        sum+=A[i][j];
                        max = A[i][j];
                        break;
                    }
                    else{
                        continue;
                    }
                }
                else flag = false;
            }
            if(!flag){
                sum = -1;
                break;
            }
        }

        cout<<sum<<endl; 
        
    }
    return 0;
}