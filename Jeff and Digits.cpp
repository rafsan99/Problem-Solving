#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n,i,c5=0,c0=0;
        cin>>n;

        int c[n];

        for(i=0;i<n;i++){
            cin>>c[i];
            if(c[i]==5){
                c5++;
            }
            else{
                c0++;
            }
        }

        c5=floor(c5/9)*9;

        if(c0==0){
            cout<<-1;}
        else if(c5==0){
            cout<<0;}
        else{
        for(i=0;i<c5;i++){
            cout<<5;}
        for(i=0;i<c0;i++){
            cout<<0;}
        }
}


