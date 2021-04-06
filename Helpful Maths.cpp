#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int x,i,y;
    string s;
    cin>>s;
    sort(s.begin(), s.end());

    x=s.length();

    y=x-1;
    y=x/2;
    for(i=y;i<x;i++){
        if(i==x-1){
        cout<<s[i];}
        else{
            cout<<s[i]<<"+";
        }
    }
    return 0;
}
