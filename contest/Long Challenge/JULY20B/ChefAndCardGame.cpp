#include <iostream>
using namespace std;

int calculate (long num)
	{
	    int result=0;
	    while(num!=0){
            result = result + num % 10;
            num=num/10;
	    }
	    return result;
	}

int main() {
	// your code goes here

	int T; cin>>T;
    while(T--){
        int N; cin>>N;
        long A[N]={0}, B[N]={0};
        for(int i=0;i<N;i++){
            cin>>A[i]>>B[i];
        }
        int chef=0,morty=0;
        int tempA,tempB;
        for(int i=0;i<N;i++){
            tempA = calculate(A[i]); tempB = calculate(B[i]);
            if(tempA > tempB) chef++;
            else if(tempA < tempB) morty++;
            else if(tempA == tempB){ chef++; morty++; }
        }
        if(chef>morty){
            cout<<"0 "<<chef<<endl;
        }
        else if(chef<morty){
            cout<<"1 "<<morty<<endl;
        }
        else{
            cout<<"2 "<<chef<<endl;
        }
    }
	return 0;
}

