#include <bits/stdc++.h>

using namespace std;

int main()
{
        /*long long m,n,i,l=1,j,res=0,a;
        cin>>m>>n;
        long long t[n];

        for(i=0;i<n;i++){
            cin>>t[i];
            if(i>0){
            if(t[i]==t[i-1]){
                t[i]=0;
            }
            }
        }

        for(i=0;i<n;i++){
            if(t[i]==t[i+1]){
                    for(j=i;j<n-1;j++){
                        t[j]=t[j+1];
                    }
                n=n-1;
            }
        }

        i=0;
            for(j=1;j<=m;j++){

                if(t[i]!=0){
                    if(i<n&&t[i]==j){
                    res=l;
                    i++;
                    }
                }
                else if(t[i]==0){i++;}
                if(i==n){break;}
                l++;
                if(j==m){
                    j=0;
                }
            }

            cout<<res-1;*/


            long long int n, m;
	long long int s[100005];

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> s[i];
	}
	long long int k =s[0];
	for (int i = 1; i < m; i++) {

		if (s[i] > s[i - 1]) {
			k = k + (s[i] - s[i - 1]);


		}
		 if (s[i] < s[i - 1]) {
			k = k + (n - s[i - 1]) + s[i];


		}
	else if (s[i] == s[i - 1]) {
			k = k+0;


		}

	}

	cout << k-1;


	return 0;


}
