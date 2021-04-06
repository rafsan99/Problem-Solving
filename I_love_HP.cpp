#include <iostream>

using namespace std;

int main() {
    int n,b,w,i,result=0;

    cin>>n;

    int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];

        if(i==0){
            b=a[i];
            w=a[i];
        }
    }

    for(i=1;i<n;i++){

        if(a[i]>b){
            b=a[i];
            result++;
        }

        else if(a[i]<w){
            w=a[i];
            result++;
        }
    }

    cout<<result;
}
