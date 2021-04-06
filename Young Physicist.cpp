#include<iostream>

using namespace std;


int main(){

    int n,sum=0,a=0,b=0,c=0;
    cin>>n;
    int x[n],y[n],z[n];

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
        a=a+x[i];
        b=b+y[i];
        c=c+z[i];
    }

    if(a==0&&b==0&&c==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



}


