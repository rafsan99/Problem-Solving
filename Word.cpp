#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int i,upper=0,lower=0;
    string s;
    cin>>s;

    for(i=0;i<s.length();i++){
        if(s[i]>=65&&s[i]<=90){
            upper++;
        }
        else if(s[i]>=97&&s[i]<=122){
            lower++;
        }
    }

    if(upper>lower){
        for(i=0;i<s.length();i++){
        s[i]=toupper(s[i]);}
    }
    else{
        for(i=0;i<s.length();i++){
        s[i]=tolower(s[i]);}
    }

    cout<<s;
    //s[0]=toupper(s[0]);
    //cout<<s;
    return 0;
}

