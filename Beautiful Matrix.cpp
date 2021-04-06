#include<iostream>
using namespace std;


int main(){

    int i,j,x,y,step1,step2,position;
    int n[50][50];

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>n[i][j];
            if(n[i][j]==1){
                x=i;
                y=j;
            }
        }
    }


    step1=3-x;
    step2=3-y;
    if(step1<0){
        step1=step1*(-1);
    }
    if(step2<0){
        step2=step2*(-1);
    }
    position=step1+step2;
    cout<<position;
    return 0;
}

