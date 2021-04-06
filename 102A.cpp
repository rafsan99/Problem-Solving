#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin>> t;

    while(t--){
        int n,d,i;

        cin>>n>>d;

        int arr[n];

        for(i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        if(arr[n-1]<=d){
            cout<<"YES \n";
        }

        else{
            for(i=0;i<n;i++){
                if(arr[i]<=d){
                    continue;
                }

                else if(arr[i]>d){
                    arr[i]=arr[0]+arr[1];
                    if(arr[i]>d){
                        cout<<"NO \n";
                        break;
                    }
                    else{
                        if(i==n-1){
                            cout<<"YES \n";
                        }
                        sort(arr,arr+n);
                    }
                }
            }
        }
    }
}
