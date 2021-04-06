#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c,d;

    cin>>t;

    while (t>0){

        cin>>a>>b>>c>>d;

        if((a+b)>(c+d)){
            cout<<a+b<<endl;
        }
        else{
            cout<<c+d<<endl;
        }

        t--;
    }

}


