//
// Created by parth on 11/6/20.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;


    while (t--) {
        for (int i = 0; i < s.length(); i += 1) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i += 1;

            }
        }
    }


    cout << s;

    return 0;
}

