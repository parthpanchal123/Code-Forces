//
// Created by parth on 11/6/20.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;


    while (k--) {
        //check last digit
        if (n % 10 != 0) {
            n -= 1;
        } else {
            n /= 10;
        }

    }

    cout << n << endl;


    return 0;
}

//512 % 10 =