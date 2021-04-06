#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t>0){
    int k=0,n,j=0;
    string l,m,str,str2,str1 = "trygub";
    cin>>n;
    cin >> str;
    str2=str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str1[k] && k < 6 ){
            k++;
            j=i;
        }
    }

    if(k==6&&j!=(n-1)){
            m=str2.substr(j);
            l=str2.substr(0,j);
            reverse(m.begin(), m.end());
            reverse(l.begin(), l.end());
            cout<<m<<l<<"\n";

    }
    else if (k == 6&&j==(n-1)){
            reverse(str.begin(), str.end());
            cout<<str<<"\n";
            }
    else cout<<str<<"\n";

    t--;
    }

}

