#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,n,m,i,a=0,b=1000;

    cin>>n>>m;
    x=n-1;
    int arr[m];

    for(i=0;i<m;i++){
        cin>>arr[i];
    }

    sort(arr,arr+m);

    for(i=0;i<=m-n;i++){
        a=arr[i+x]-arr[i];
        b=min(a,b);
    }

    cout<<b;
}
