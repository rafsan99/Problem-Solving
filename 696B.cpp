#include<bits/stdc++.h>
#include <iostream>
#include<math.h>
#include <algorithm>

using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--){
        int d,i,j,a=200;

        cin>>d;

        for(i=6;i<a;i++){
                int arr[3],k=0;
            for(j=1;j<=10;j++){
                if(i%j==0&&k<3){
                    arr[k]=j;
                    k++;
                }

                else if(k==2){
                    break;
                }
            }

            if((k==2)&&(arr[1]-arr[0]>=d)){
                cout<<i;
                break;
            }
        }
    }
}
