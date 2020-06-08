//
// Created by parth on 8/6/20.
//


#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "hello";
    int j = 0;

    for (int i = 0; i < s.length(); i += 1) {

        if (s[i] == s[i + 1]) {
            if (s[i] == t[j]) {
                j += 1;
            }

        } else {
            if (s[i] == t[j]) {
                j += 1;

            }

        }

    }

    j == 5 ? cout << "YES" : cout << "NO";

    return 0;
}