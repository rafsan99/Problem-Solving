#include<iostream>
using namespace std;


int main(){

    int x,y;
    cin>>x;

    y=x-2;

    if(x>=3){
    if(y%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }
}

