#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b,c[100];
	cin>>a>>b;

	for(int i=0;i<a.length();i++){
        if(a[i]==b[i]){
            c[i]='0';
            cout<<c[i];
        }
        else{
            c[i]='1';
            cout<<c[i];
        }
	}

}






