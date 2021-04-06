#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while (t>0){

        long long p,q,i;
        cin>>p>>q;
        for(i=p;i>0;i--){
            if(p%i==0&&(i%q)!=0){

                    cout<<i<<"\n";
                    break;

            }
        }
        t--;
    }

}


