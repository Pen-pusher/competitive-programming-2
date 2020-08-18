#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    vector<int> f(m);
    for (auto &i: f)
        cin >> i;
    sort(f.begin(), f.end());

    int best = f[n-1] - f[0];
    for (int i=1; i<=m-n; i++) {
        best = min(best, f[i+n-1]-f[i]);
    }
    cout << best << endl;
    return 0;
}