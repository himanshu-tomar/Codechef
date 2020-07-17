
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      cout<<"1 1";
	  n = n/2;
	  for(int i=0;i<n;i++){
		  printf("0");
	  }
	  cout<<"\n";
  }
  return 0;
	  
	  
}
