#include <iostream>
#include<algorithm>
using namespace std;

int main() {
long long a[1001], b[1001],n,m,c1=0,c2=0;

cin>>n>>m;
for(int i=0;i<m;i++)
{cin>>a[i];
b[i]=a[i];}


for(int i=0;i<n;i++)
{  sort(a,a+m);

c1+=a[0];
a[0]--;

if(a[0]==0)
a[0]=1001;
}
for(int i=0;i<n;i++)
{  sort(b,b+m,greater<int>());

c2+=b[0];
b[0]--;
}
cout<<c2<<" "<<c1;
return 0;
}
/*
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,i,j=0,ma=0,mi=0,a=0;

    cin>>n>>m;

    int arr1[m],arr2[m];

    for(i=0;i<m;i++){
        cin>>arr1[i];
        arr2[i]=arr1[i];
    }

    sort(arr1,arr1+m,greater<int>());

    for(i=0;i<n;i++){
         if(arr1[j]>0){
            ma=ma+arr1[j];
            arr1[j]=arr1[j]-1;
            a++;
            j++;
            if(a==n) break;
            else if(arr1[j-1]>=arr1[j]){
                j--;
            }
            if(j==m){
                 j=0;
            }

        }
        else if(arr1[j]<=0){
            j++;
            if(j==m){
                j=0;
            }
        }
    }

    sort(arr2,arr2+m);

    for(i=0;i<m;i++){
            mi=mi+arr2[i];
            arr2[i]=arr2[i]-1;
            n--;
            if(n==0) break;
            else if(arr2[i]>0) i--;
    }

    cout<<ma<<" "<<mi;

    return 0;
}
*/
