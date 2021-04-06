#include <bits/stdc++.h>

using namespace std;

int main()
{
        int i,neg=0;
        string s;

        cin>>s;

        for(i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(s[i+1]=='4'){
                    if(s[i+2]=='4'){
                        i=i+2;
                    }
                    else{i=i+1;}
                }
            }

            else{
                neg++;
            }
        }

        if(neg==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
}



