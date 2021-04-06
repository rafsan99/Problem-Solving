#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int k,l,m,n,d,result=0;

	cin>>k>>l>>m>>n>>d;

	int dr[d];

	if(k==1){
        cout<<d;
	}
	else{
	for(int i=1;i<=d;i++){

        dr[i]=i;

        if(dr[i]%k==0){
            result++;
        }
        else if(dr[i]%l==0){
            result++;
        }
        else if(dr[i]%m==0){
            result++;
        }
        else if(dr[i]%n==0){
            result++;
        }
	}

	cout<<result;
	}
}



