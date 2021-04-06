#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,num,i;
    cin>>t;

    while(t>0){
        long long n;
        cin>>n;

        num=9;
        for(i=0;i<n;i++){
            if(num==0){
                cout<<num;
                num=9;
            }
            cout<<num;
            num--;
        }
        cout<<endl;
        t--;
    }
}
