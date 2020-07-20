#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    short n;
    while(true){
        cin>>n;
        if(n==42) break;  
        else cout<<n<<endl;
    }
    return 0;
}
