#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m;
vector<int> v;

ll c(ll u) {
    ll s = 0;
    for (ll e : v)
        if (u < e)
            s += e - u;
    return s;
}

int main() {
    cin >> n >> m;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    ll l = 0, r = v.back();

    while (l <= r) {
        ll md = (l + r) / 2;
        ll g = c(md);
        if (g == m) {
            cout << md;
            break;
        }
        else if (g > m)
            l = md + 1;
        else
            r = md - 1;
    }

    return 0;
}