#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,i,a,b,c=0,j;
    string s;
    cin>>t;

    while(t>0){
            cin>>a>>b;
            cin>>s;

            if(a==b||a<b){
            for(i=0;i<s.length();i++){
                if(s[i]=='1'){
                    c=c+a;
                }
            }
            cout<<c<<"\n";
        }

        else{
            for(i=0;i<s.length();i++){
                if(s[i]=='1'&&s[i+1]=='0'){
                    if(s[i+2]='1'){
                    c=c+(b*1)+(a*1);
                    for(j=i+3;j<s.length();j++){
                        if(s[j]=='0'){
                            break;
                            i=j;
                        }
                        else if(s[j]=='1'){
                            i=j;
                        }
                        else if(j=(s.length()-1)){
                            i=j;
                        }
                    }
                    }

                    c=c+(a*1);
                    i+=2;
                }
            }
            cout<<c<<"\n";
        }

        t--;
    }
}
