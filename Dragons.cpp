#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,a,b,i;
    vector< pair<int,int> > v;

    cin>>s>>n;

    for(i=0;i<n;i++){
        cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end());

    for(auto x : v){
            if(s>x.first){
                s=s+x.second;
            }
            else{
                cout<<"NO";
                return 0;
            }
    }

    cout<<"YES";
}
