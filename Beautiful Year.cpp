#include <iostream>
using namespace std;

int main()
{
	int n,w,x,y,z;
	cin >> n;
	do
    n++,w=n/1000,x=(n/100)%10,y=(n/10)%10,z=n%10;
	while(w==x||w==y||w==z||x==y||x==z||y==z);
	cout<<n;
}
