#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,i,j;

    cin>>t;

    while (t>0){

        cin>>n>>x;
        int a[n],b[n],c[n];

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=0;i<n;i++){
            cin>>b[i];
        }

        reverse(b,b+n);


        for(i=0;i<n;i++){
            c[i]=a[i]+b[i];

            if(c[i]>x){
                cout<<"No \n";
                break;
            }
            if(i==n-1){
                cout<<"Yes \n";
            }
        }
        t--;
    }

}

