#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,mid,b;

    cin>>n>>k;

    if(n%2==0) mid=(n/2);
    else mid=(n/2)+1;

    if(k<=mid)
            b=(2*k)-1;
    else
        b=2*(k-mid);
    cout<<b;

}
