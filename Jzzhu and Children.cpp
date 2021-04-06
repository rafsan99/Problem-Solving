#include <iostream>

using namespace std;

int main()
{
    int n,m,a,i=0,y,p=0,x;

    cin>>n>>m;

    for(i=1;i<=n;i++){
        cin>>a;

        y=(a+m-1)/m;

        if(y>=p){
            x=i;
            p=y;
        }
    }

    cout<<x;
}


