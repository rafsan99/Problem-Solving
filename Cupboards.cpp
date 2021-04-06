#include <iostream>

using namespace std;

int main() {
    int n,l=0,r=0,L,R;
    cin>>n;

    for(int i=0;i<n;i++){

        cin>>L>>R;

        l+=L;
        r+=R;
    }

    cout<<min(l,n-l)+min(r,n-r);
}




