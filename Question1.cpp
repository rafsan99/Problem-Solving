#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,n,i;

    cin>>t;

    while(t>0){
            cin>>n;
        for(i=n*2;i<n*4;i+=2){
            cout<<i<<" ";
        }
        cout<<"\n";
        t--;
    }
}
