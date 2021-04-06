#include<bits/stdc++.h>
#include <iostream>
#include<math.h>
#include <algorithm>

using namespace std;

int main(){
    int t,i;
    cin>>t;

    while(t--){


        int a,b,c,g,l;
        string s,t,x;
        cin>>s;
        cin>>t;

        if(s.length()>t.length()){
            a=t.length();
            x=s.substr((s.length()-a),a);

            if(t==x){

                b=s.length();

                //g=gcd(b,a%b);
                l=(a*b)/__gcd(a,b);

                //cout<<l;

                for(i=0;i<(l/a);i++){
                    cout<<t;
                }

                cout<<endl;
                /*if(a%b==0||b%a==0){
                        c=b/a;

                    for(i=1;i<=c;i++){
                            cout<<t;
                        }
                        cout<<endl;

                }

                else{
                        for(i=1;i<=b;i++){
                            cout<<t;
                        }
                        cout<<endl;

                }
                */
            }

            else{
                cout<<"-1 \n";
            }
        }


        else{
            a=s.length();
            x=t.substr((t.length()-a),a);

            if(s==x){
                b=t.length();

                l=(a*b)/__gcd(a,b);

                //cout<<l;

                for(i=0;i<(l/a);i++){
                    cout<<s;
                }

                cout<<endl;
            }
               /* if(a%b==0||b%a==0){

                        c=b/a;

                    for(i=1;i<=c;i++){
                            cout<<s;
                        }
                        cout<<endl;
                }

                else{

                        for(i=1;i<=b;i++){
                            cout<<s;
                        }
                        cout<<endl;
                }
            }*/

            else{
                cout<<"-1 \n";
            }
        }
    }
}
