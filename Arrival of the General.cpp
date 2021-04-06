#include <iostream>
using namespace std;

int main() {
	int n,s,a[100],i,max=1,min;
	cin>>n;
	min=n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(a[max]<a[i])max=i;
	}
	for(i=n;i>0;i--){
		if(a[min]>a[i])min=i;
	}
	s=max-1+n-min;
	if(min<max){
		s--;
	}
	cout<<s;
}
