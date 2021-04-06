#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,i,dif=999,s1,s2;

    cin>>n;

    int a[n];

    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    for(i=1;i<n+1;i++){

        if(i==n){
            d=a[n]-a[1];
            if(d<0){d=d*(-1);}
            if(d<dif){
                dif=d;
                s1=n;
                s2=1;
            }
        }
        else{
            d=a[i+1]-a[i];
            if(d<0){d=d*(-1);}
            if(d<dif){
                dif=d;
                s1=i;
                s2=i+1;
            }
        }

    }

    cout<<s1<<" "<<s2;
}




