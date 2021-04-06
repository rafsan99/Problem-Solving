#include <iostream>

using namespace std;

int main()
{
    int n,i=0,j=0,right,left,up,low,sum=0;

    cin>>n;

    int x[n],y[n];

    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

    for(i=0;i<n;i++){
        right=0;
        left=0;
        up=0;
        low=0;

        for(j=0;j<n;j++){
            if(x[j]>x[i]&&y[j]==y[i]){
                right++;
            }
            else if(x[j]<x[i]&&y[j]==y[i]){
                left++;
            }
            else if(x[j]==x[i]&&y[j]<y[i]){
                low++;
            }
            else if(x[j]==x[i]&&y[j]>y[i]){
                up++;
            }
        }

        if(right!=0&&left!=0&&up!=0&&low!=0){
            sum++;
        }
    }

    cout<<sum;

}

