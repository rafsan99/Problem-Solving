#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i;

    cin>>n;

    int arr[n],arr1[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }

    sort(arr1,arr1+n);

    set<int> s;

    for(i=0;i<n;i++){
        s.insert(arr1[i]);
    }

    cout<<s.size()<<"\n";

    for(auto x:s){

            int j=0,c=0;

        for(i=0;i<n;i++){
            if(x==arr[i]&&c==0){
                j=i+1;
                c++;
            }

            else if(x==arr[i]&&c>0){
                j=(i+1)-j;
                c++;
                cout<<x<<" "<<j<<"\n";
                break;
            }
        }

        if(c==1){
            cout<<x<<" "<<"0"<<"\n";
        }
    }
}
