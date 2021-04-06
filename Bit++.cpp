#include<iostream>
using namespace std;


int main(){

    int n,sum=0;
    string k;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>k;
        if(k=="++X"){
            sum += 1;
        }
        else if(k=="X++"){
            sum += 1;
        }

        else if(k=="X--"){
            sum -= 1;
        }
        else if(k=="--X"){
            sum -= 1;
        }
    }

    cout<<sum;

    return 0;
}




