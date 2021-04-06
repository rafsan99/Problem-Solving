#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,i,j;

    cin>>t;

    while(t>0){
        int n,k,l;

        cin>>n>>k;

        int arr1[n],arr2[n];

        for(i=1;i<n+1;i++){
           cin>>arr1[i];
        }

        for(j=0;j<k;j++){
            for(i=n;i>0;i--){
                if(i==n){
                    l=arr1[i];
                    arr1[i]=arr1[i-1];
                }

                else if(i==1){
                    arr1[1]=l;
                }

                else{
                    arr1[i]=arr1[i-1];
                }
            }
        }

        for(i=1;i<n+1;i++){
           cout<<arr1[i]<<" ";
        }

        t--;
    }
}


