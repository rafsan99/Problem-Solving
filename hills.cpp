#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t>0){
        long long n,i,j=0;

        cin>>n;

        long long arr[n];

        for(i=0;i<n;i++){
            cin>>arr[i];
        }

        for(i=1;i<n;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                arr[i+1]=arr[i];
                break;
            }

            else if(arr[i]<arr[i-1]&&arr[i]<arr[i+1]){
                arr[i]=arr[i+1];
                break;
            }
        }

        for(i=1;i<n-1;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                j++;
            }

            else if(arr[i]<arr[i-1]&&arr[i]<arr[i+1]){
                j++;
            }
        }

        cout<<j<<endl;

        t--;
    }
}
