#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,res=0,i,j;

    cin>>n>>m;

    for(i=0;i<33;i++){
        for(j=0;j<33;j++){
            if(((i*i)+j)==n&&(i+(j*j))==m){
                res++;
            }
        }
    }

    cout<<res;

}
