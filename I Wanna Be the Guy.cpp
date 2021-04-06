/* #include  <iostream>
#include <bits/stdc++.h>

using namespace std;

//macro definitions for max variable length
#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100
#define MAX_ABOUT_LENGTH 200

using namespace std;


int main () {

   int levels,value=0;
    cin>>levels;
  char x[MAX_NAME_LENGTH], y[MAX_ADDRESS_LENGTH],z[MAX_ADDRESS_LENGTH];

  cin.getline (x, MAX_NAME_LENGTH);

  cin.getline (y, MAX_ADDRESS_LENGTH);

  strcat(x,y);
  //cout << x;

  int i = 0, j = 0;
    while (x[i])
    {
        if (x[i] != ' ')
           x[j++] = x[i];
        i++;
    }
    x[j] = '\0';

    //cout<<x;

    string a=x;
    sort(a.begin(),a.end());
    //cout<<a;

    int index = 0;
    int n=sizeof(a)/sizeof(a[0]);
   for (int i=0; i<n; i++) {
     int j;
     for (j=0; j<i; j++)
        if (a[i] == a[j])
           break;
           if (j == i)
        a[index++] = a[i];
   }
    cout<<a;
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,q,k;
	cin>>n>>p;
	set<int> s;
	for(int i=0;i<p;i++)
	{
	    cin>>k;
    s.insert(k);
    }
	cin>>q;
	for(int i=0;i<q;i++){
            cin>>k;
    s.insert(k);
    }
	if(s.size()==n) cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
}




