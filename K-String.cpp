#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin >> k;
	string s;
    cin >> s;
	vector<int> cc(26, 0);
	int n = s.size();
	for (int i=0; i<n; i++) cc[s[i]-'a']++;
	for (int i=0; i<26; i++) {
	    if (cc[i] % k != 0) {
	        cout << "-1"; return 0;
	    }
	    cc[i] /= k;
	}
	for (int a=0; a<k; a++) {
    	for (int i=0; i<26; i++) {
    	    for (int j=0; j<cc[i]; j++) cout << char(97+i);
    	}
	}
	return 0;
}
