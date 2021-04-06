#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    int i,a=0,b=0,n;

    cin>>n;

    string c,t1[n];

    for(i=0;i<n;i++){
        if(i==0){
        cin>>t1[i];
        a++;
        }

        else if(i>0){
            cin>>t1[i];
            if(t1[i]==t1[0]){
                a++;
            }
            else{
                c=t1[i];
                b++;
            }
        }
    }

    if(max(a,b)==a){
        cout<<t1[0];
    }
    else{
        cout<<c;
    }
}
