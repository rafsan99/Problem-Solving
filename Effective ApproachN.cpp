#include <bits/stdc++.h>

using namespace std;

int main()
{
 long long m,n,a,b,v=0,p=0,i,s[100001];
 cin >> n;
 for(i=0;i<n;i++)
 {
     cin >> a;
     s[a]=i;
 }
 cin >> m;
 for(i=0;i<m;i++)
 {
     cin >> b;
     v=v+s[b]+1;
     p=p+n-s[b];
 }
 cout << v<<" "<<p;
}
