#include <bits/stdc++.h>
using namespace std;
int main() {
      int total=0;
      string s;
      cin>>s;

      for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='7'){
            total++;
        }
      }

        if(total==4||total==7){
        cout<<"YES";
      }
      else{
        cout<<"NO";
      }
}
