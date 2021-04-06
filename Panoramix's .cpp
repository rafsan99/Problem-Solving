#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,num1,num2,result,div=2;

    cin>>num1>>num2;

	for(i=num1+1;i<=50;i++){
        for(j=div;j<=10;j++){
            if(i!=j){
                if(i%j==0){
                    break;
                }
                else if(i%j!=0){
                    if(j==10){
                        result=i;
                        //cout<<i;
                        //end;
                        i=51;
                    }
                }
            }
        }
	}

	if(result==num2){
        cout<<"YES";
	}
	else{
        cout<<"NO";
	}
}





