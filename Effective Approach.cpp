#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
    int n,m,i,v=0,p=0,l=1,j;

    //cin>>n;

    scanf("%d",&n);
    int arr[n];

    for(i=1;i<=n;i++){
        //cin>>arr[i];
        scanf("%d",&arr[i]);
    }

    //cin>>m;
    scanf("%d",&m);

    int ele[m];

    for(i=1;i<=m;i++){
        //cin>>ele[i];
        scanf("%d",&ele[i]);
        for(j=1;j<=n;j++){
            if(ele[i]==arr[j]){
                v=v+l;
                l=1;
                break;
            }
                l++;
        }
    }

    for(i=1;i<=m;i++){

        for(j=n;j>=1;j--){
            if(ele[i]==arr[j]){
                p=p+l;
                l=1;
                break;
            }
                l++;
        }
    }

    //cout<<v<<" "<<p;
    printf("%d",v);
    printf(" %d",p);
}

