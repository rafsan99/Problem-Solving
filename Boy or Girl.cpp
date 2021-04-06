#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;


int main(){

    int x;
    string s;
    cin>>s;
    sort(s.begin(),s.end());

    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            x=i+1;
            s.erase(s.begin()+x);
            i=-1;
        }

    }

    if(s.length()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }



}


