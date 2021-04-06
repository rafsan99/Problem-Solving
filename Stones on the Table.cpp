#include<iostream>
using namespace std;


int main(){

    int x,sum=0;
    cin>>x;
    string s;
    cin>>s;

    if(s.length()==x){
    for(int i=0;i<x;i++){
        if(s[i]==s[i+1]){
            sum=sum+1;
        }
    }

    cout<<sum;
    }


}

