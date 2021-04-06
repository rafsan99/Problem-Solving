#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n,i,minimum=2147483647,j=0,res;

        cin>>n;

        int c[n];

        for(i=1;i<=n;i++){
            cin>>c[i];
            minimum=min(minimum,c[i]);
        }

        for(i=1;i<=n;i++){
            if(c[i]==minimum){
                res=i;
                j++;
            }
        }

        if(j==1){
            cout<<res;
        }
        else{
            cout<<"Still Rozdil";
        }

}
