//
// Created by parth on 8/6/20.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, count = 1;
    cin >> a >> b;

    while (true) {

        a = a * 3;
        b = b * 2;
        if (b >= a) {
            count += 1;
        } else {
            break;
        }

    }
    cout << count;


    return 0;
}
