#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,d=0,tf=0,result;

    cin>>n;

    int finger[n];

    for(i=0;i<n;i++){
        cin>>finger[i];
        tf=tf+finger[i];
    }

    for(i=1;i<6;i++){
        if((tf+i)%(n+1)!=1){
            d++;
        }
    }

    cout<<d;

}

