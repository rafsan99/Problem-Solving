#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	float x=0,result;
	cin>>n;
	int d[n];

	for(int i=0;i<n;i++){
        cin>>d[i];
        if(d[i]>0){
            x=x+d[i];
        }
	}

	result=x/(n*100);
	cout << fixed << setprecision(12) <<result*100;
}

