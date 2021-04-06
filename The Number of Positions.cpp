#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, a, b, ans=0;

int main() {
    cin >> n >> a >> b;
    for(int i = a + 1; i <= n; i++)
        if(n - i <= b)
            ans++;
    cout << ans;

}
