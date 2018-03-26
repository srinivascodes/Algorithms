/*
Author: Shubham Agrawal
email:<shubham.agrawal.8025@gmail.com>
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int z[n];
    z[0] = 0;
		
    for (int i = 1, l = 0, r = 1; i < n; i++, r = i < r ? r : i)
        for (z[i] = min(r - i, z[i - l]); s[i + z[i]] == s[z[i]]; z[i]++, r = i + z[i], l = i);

    for (int i = 0; i < n; i++)
        cout << z[i] << " ";
}
