#include<iostream>
using namespace std;


int main(){

    int n,k,sum=0,i;
    cin>>n>>k;
    int j[n];

    for(i=0;i<n;i++){
        cin>>j[i];
    }

    for(i=0;i<n;i++){

    if(j[i]>0){
    if(j[i]>=j[k-1]){
        sum += 1;
    }
    }
    }


    cout<<sum;


    return 0;
}



