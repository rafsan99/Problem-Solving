#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,i,j,g=0,res,res1=0;
    multiset<int> s;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>m;

    int b[m];

    for(i=0;i<m;i++){
        cin>>b[i];
    }

    if(a[0]==1){
        cout<<1;
        return 0;
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((b[j]%a[i])==0){
                if((b[j]/a[i])>=res1){
                res1=b[j]/a[i];
                s.insert(res1);
                g=s.count(res1);
                }
            }
        }
    }

    cout<<g;
}
