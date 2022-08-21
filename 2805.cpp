#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m,k;
vector<ll> v;
ll MN = 0;
ll MX = 1e9;

bool f(int h) {
    ll s = 0;
    for (ll e : v)
        if (h < e)
            s += e - h;
    if (s >= m)
        return true;
    else
        return false;
}

int parametric_search() {
    int l = MN; int r = MX-1;
    while (l != r) {
        int m = r - (r - l) / 2;
        f(m) ? l = m : r = m - 1;
    }
    return l;
}

int main() {
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> k;
        v.emplace_back(k);
    }
    cout<<parametric_search();
    return 0;
}