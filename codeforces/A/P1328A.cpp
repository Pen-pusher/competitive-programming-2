// A. Divisibility Problem
// https://codeforces.com/problemset/problem/1328/A
// 2 mint avg
// math, brute force

#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;


int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a%b == 0)
            cout << 0;
        else
            cout << b-a%b;
        cout << endl;
    }
    return 0;
}