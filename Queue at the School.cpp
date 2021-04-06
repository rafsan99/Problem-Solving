#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int x,y;
    cin>>x>>y;

    string s,p;
    cin>>s;

    for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
            if(s[j+1]=='G'){
            if(j<x-1){
           swap(s[j],s[j+1]);
           j++;

       }

    }
    }
    }
    cout<<s;


}


