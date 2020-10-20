#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

ll ans;

ll factorial[22];

ll nCr (ll n, ll r) {
    return factorial[n] / (factorial[n-r]*factorial[r]);
}

int main() {
    factorial[0] = 1;
    factorial[1] = 1;
    for (ll i = 2; i < 22; i++) factorial[i] = factorial[i-1]*i;
    ll n;
    cin >> n;
    ans = nCr(n, n/2) / 2;
    ans *= factorial[(n/2)-1];
    ans *= factorial[(n/2)-1];
    cout << ans << endl;
}

