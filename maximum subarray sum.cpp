#include<bits/stdc++.h>

using namespace std;

int main()
{
int best = 0, sum = 0,arr[8]={-1,2,4,-3,5,2,-5,2};
for (int k = 0; k < 8; k++) {
sum = max(arr[k],sum+arr[k]);
best = max(best,sum);
}
cout << best << "\n";
}
