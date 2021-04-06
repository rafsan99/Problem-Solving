#include<iostream>

using namespace std;


int main(){

    int i,k,n,w,sum=0;
    cin>>k>>n>>w;

    for(i=1;i<=w;i++){
        sum=sum+(k*i);
    }
    sum=sum-n;
    if(sum<0){
        sum=0;
    }
    cout<<sum;


}
