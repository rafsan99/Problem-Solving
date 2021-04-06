#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin>>t;

    while(t>0){
        int w=0,h=0,n=0,i=0,k=1;

        cin>>w>>h>>n;

        if(n==k){
            cout<<"YES \n";
            t--;
        }

        else if((w%2!=0)&&(h%2!=0)){
            cout<<"NO \n";

            t--;
        }

        else{
            for(i=0;i<1;i++){
                if(w%2==0){
                    w=w/2;
                    k=k*2;
                    i--;
                }

                else if(h%2==0){
                    h=h/2;
                    k=k*2;
                    i--;
                }
            }

            if(k>=n){
                cout<<"YES \n";
            }
            else{
                cout<<"NO \n";
            }
        t--;
        }
    }
}
