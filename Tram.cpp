#include<iostream>

using namespace std;


int main(){

    int n,a,b,prev=0,rem=0,capa=0,capa1=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        rem=prev-a;
        capa=b+rem;
        prev=capa;

        if(capa>capa1){
            capa1=capa;
        }

    }

    cout<<capa1;





}

