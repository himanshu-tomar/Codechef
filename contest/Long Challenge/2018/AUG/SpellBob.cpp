
#include <iostream>

using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
      string s1,s2;
      cin>>s1>>s2;
      string s="";
      bool flag = false;
	  
          if((s1[0] == 'o' || s2[0] == 'o') && (s1[1] == 'b' || s2[1] == 'b') && (s1[2] == 'b' || s2[2] == 'b') && !flag) flag = true;
		  if((s1[0] == 'b' || s2[0] == 'b') && (s1[1] == 'b' || s2[1] == 'b') && (s1[2] == 'o' || s2[2] == 'o') && !flag) flag = true;
		  if((s1[0] == 'b' || s2[0] == 'b') && (s1[1] == 'o' || s2[1] == 'o') && (s1[2] == 'b' || s2[2] == 'b') && !flag) flag = true;
      
      if(flag) cout<<"yes\n";
      else cout<<"no\n";
  }
  return 0;
}
