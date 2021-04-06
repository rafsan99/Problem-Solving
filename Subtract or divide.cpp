#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,i,j,a,b;
    vector<int> v;

    cin>>t;

    while(t>0){
        cin>>n;
        b=n;
        a=0;
        if(n==1) {cout<<"0 \n";}
        else if(n==2){
            cout<<"1 \n";
        }
        else if(n==3){
            cout<<"2 \n";
        }
        else if(n>3){
            for(i=2;i<n;i++){
                if(n%i==0){
                 v.push_back(i);
                }
            }

            reverse(v.begin(),v.end());

            for(i=n;i>0;i--){
                    if(b==1) break;
                for(j=0;j<v.size();j++){
                    if(b%v[j]==0){
                        b=b/v[j];
                        if(b>1){
                            b=b-1;
                            a+=2;
                            break;
                        }
                    }

                    if(b%v[j]!=0){
                        b=b-1;
                        a++;
                        if(b==1) break;
                    }
                }


            }
            cout<<a<<"\n";
        }

        t--;
    }
}
