#include<iostream>
#include <sstream>
#include <string>
using namespace std;


int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
    int y;
    string x,stri,z,p;
    ostringstream str1;
    cin>>x;


    if(x.length()>10){

        y=x.length();
        y=y-2;
        str1 << y;
        stri = str1.str();
        z=x[0];
        p=x[y+1];
        cout<<z<<stri<<p<<endl;
        //cout<<stri<<endl;

    }
    else{
        cout<<x<<endl;
    }
    a=a--;
    }
    return 0;
}

