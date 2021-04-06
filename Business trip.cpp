#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a[12],i,sum=0;

    cin>>n;

    for(i=0;i<12;i++){
        cin>>a[i];
    }

    sort(a,a+12,greater<int>());

    if(n==0){
        cout<<0;
        return 0;
    }

    for(i=0;i<12;i++){

            if(a[i]==n){
                cout<<1;
                break;
            }
            sum=sum+a[i];
            if(sum>=n){
                cout<<i+1;
                break;
            }
            if(i==11){
                cout<<-1;
            }
    }
}
