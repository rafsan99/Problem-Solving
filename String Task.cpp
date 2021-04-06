#include<bits/stdc++.h>

using namespace std;

int main(){
    int i;

    char w[100];

    cin>>w;

    for(i=0;i<strlen(w);i++){
        if(w[i]!='A'&&w[i]!='a'&&w[i]!='O'&&w[i]!='o'&&w[i]!='Y'&&w[i]!='y'&&w[i]!='E'&&w[i]!='e'&&w[i]!='U'&&w[i]!='u'&&w[i]!='I'&&w[i]!='i')
        {
            if(w[i]>=65 && w[i]<=92){
            w[i]=w[i]+32;
            cout<<"."<<w[i];
            }
            else{
                cout<<"."<<w[i];
            }
        }
    }
}
