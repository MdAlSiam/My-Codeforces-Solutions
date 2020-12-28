/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)
#define prYes printf("YES\n")
#define prNo printf("NO\n")
#define aNewLine printf("\n")

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005LL ///2x10^5 + 5
//#define maxn 1000006LL ///10^6 + 6
//#define maxn 1000000009LL ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007LL ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll factorial[maxn];

ll add(ll n1, ll n2) {return ((n1%mod)+(n2%mod))%mod;}

ll multiply(ll n1, ll n2) {return ((n1%mod)*(n2%mod))%mod;}

ll bigmod(ll base, ll power) {
    if (base == 0) return 1;
    if (power == 1) return base;
    if (power & 1) {
        return multiply(bigmod(base, power-1), base);
    }
    else {
        ll ret = bigmod(base, power/2);
        ret = multiply(ret, ret);
        return ret;
    }
}

ll inverseMod(ll num) {
    return bigmod(num, mod-2);
    // no mission, no vision, still alive
}

ll nCr(ll num, ll r) {
    ll ret = factorial[num];
    ret = multiply(ret, inverseMod(factorial[num-r]));
    ret = multiply(ret, inverseMod(factorial[r]));
    return ret;
}

void calculateFactorials() {
    factorial[0] = 1;
    factorial[1] = 1;
    For (i, 2, maxn) factorial[i] = multiply(factorial[i-1], i);
}

void solve() {
    scl(n);
    scll(m, k);
    ll freq[n+1];
    Mem(freq, 0);
    For (i, 1, n+1) {
        scl(t);
        freq[t]++;
    }
    ll csFreq[n+1];
    csFreq[0] = freq[0];
    For (i, 1, n+1) csFreq[i] = csFreq[i-1]+freq[i];

    ll ways = 0;
    For (maxNum, 1, n+1) {
        ll nLessThan = csFreq[maxNum-1]-csFreq[max(0LL,maxNum-k-1)];
        For (toInclude, 0, freq[maxNum]) {
            if (nLessThan+toInclude < m-1) continue;
            ways = add(ways, nCr(nLessThan+toInclude, m-1));
        }
    }

    prl(ways);
}

int main() {
    calculateFactorials();
    test = 1;
    scl(test);
    while (test--) solve();
}
