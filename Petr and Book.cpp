#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d[8],i=0;

    cin>>n;

    for(i=1;i<=7;i++){
        cin>>d[i];
    }

    for(i=1;i<=7;i++){
        n=n-d[i];

        if(n==0||n<0){
            cout<<i;
            break;
        }

        if(i==7){
            i=0;
        }

    }

}


