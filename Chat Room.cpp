#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k = 0;

    string str,str1 = "hello";
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str1[k] && k < 5 )
            k++;
    }

    if (k == 5) cout << "YES"; else cout << "NO";

    return 0;

}
