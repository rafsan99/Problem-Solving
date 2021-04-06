#include<iostream>
using namespace std;


int main(){

    int a,problem=0,sum,x,y,z;;
    cin>>a;

    for(int i=0;i<a;i++){

        cin>>x>>y>>z;

        sum=x+y+z;


        if(sum>=2){
            problem=problem+1;
        }
    }

    cout<<problem;

    return 0;
}


