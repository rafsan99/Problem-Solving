#include<bits/stdc++.h>

using namespace std;

int main(){
    int i;
    string s;
    cin>>s;

    for(i=0;i<s.length();i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            cout<<" ";
            i=i+2;
        }
        else{
            cout<<s[i];
        }
    }
}
