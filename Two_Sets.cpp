#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long total = n * (n + 1) / 2;
    if (total % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    long long target = total / 2;
    vector<int> a, b;

    for (long long i = n; i >= 1; i--) {
        if (i <= target) {
            target -= i;
            a.push_back(i);
        } else {
            b.push_back(i);
        }
    }

    cout << "YES\n";
    cout << a.size() << "\n";
    for (int x : a) cout << x << " ";
    cout << "\n";
    cout << b.size() << "\n";
    for (int x : b) cout << x << " ";
    cout << "\n";
}