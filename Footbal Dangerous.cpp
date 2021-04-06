#include<string.h>
#include<iostream>

using namespace std;

int main(){

    int i,n;

    string s,a="0000000",b="1111111";

    cin>>s;

    n=s.length();

    for(i=0;i<n;i++){

    if((n-i)>=6){
        if(s[i]=='1'){
            string r=s.substr(i,7);
            if(r==b){
                cout<<"YES";
                break;
            }
        }

        else if(s[i]=='0'){
            string r1=s.substr(i,7);
            if(r1==a){
                cout<<"YES";
                break;
            }
        }
    }

    else{
        cout<<"NO";
        break;
        }
     }

}
