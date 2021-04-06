#include<iostream>
using namespace std;


int main(){

    int T,n,k,sum=0,loop=0;
    cin>>T;

    for(int i=0;i<T;i++){
        cin>>n>>k;
         int a[n];
        for(int j=0;j<n;i++){
            cin>>a[j];
             for(int x=0;x<n;x++){
                for(int y=1;y<n;y++){
                    sum=a[x]+a[y];
                    if(sum<k||sum==k){
                        loop=loop+1;
                        y=y-1;

                    cout<<loop;
                    }
                }
            }
        }
    }



return 0;

}



