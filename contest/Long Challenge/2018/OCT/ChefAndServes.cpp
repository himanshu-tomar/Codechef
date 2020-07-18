
#include <iostream>

using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
      int p1,p2,k;
	  cin>>p1>>p2>>k;
	  int i = (p1+p2)/k;
	  if(i&1) cout<<"COOK\n";
	  else cout<<"CHEF\n";
  }
  return 0;
}
