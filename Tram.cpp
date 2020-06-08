//
// Created by parth on 8/6/20.
//

//
// Created by parth on 8/6/20.
//


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, res = 0, current = 0;
    cin >> n;
    for (int i = 0; i < n; i += 1) {
        cin >> a >> b;
        if (i == 0) {
            current = b;
            res = b;

        } else {
            current = current - a + b;
            res = max(res, current);
        }
    }

    cout << res;

    return 0;
}
