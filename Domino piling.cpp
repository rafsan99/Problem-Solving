#include<iostream>
using namespace std;


int main(){

    int m,n,k,l;
    cin>>m>>n;

    k=m*n;

    if(k%2==0){
        l=k/2;
    }
    else{
        k=k-1;
        l=k/2;
    }

    cout<<l;


    return 0;
}



