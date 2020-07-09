#include<iostream>
using namespace std;

int main()
{
    int T; cin>>T;

    while(T--){
        int k; cin>>k;
        char chess[8][8]={{'O','X','X','X','X','X','X','X'},
                        {'X','X','X','X','X','X','X','X'},
                        {'X','X','X','X','X','X','X','X'},
                        {'X','X','X','X','X','X','X','X'},
                        {'X','X','X','X','X','X','X','X'},
                        {'X','X','X','X','X','X','X','X'},
                        {'X','X','X','X','X','X','X','X'},
                        {'X','X','X','X','X','X','X','X'}};
        int mobility = 1;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                //if(chess[i][j]=='O') continue;
                if(mobility < k && chess[i][j] == 'X'){
                    chess[i][j] = '.';
                    mobility++;
                }
            }
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cout<<chess[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}
