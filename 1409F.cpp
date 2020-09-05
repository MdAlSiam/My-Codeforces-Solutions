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
#define prys printf("YES\n")
#define prno printf("NO\n")

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;
string str;
string refer;
ll dp[205][205][205];

ll go (ll index, ll nT0, ll kk) {

    //dp optimization
    if (dp[index][nT0][kk] != -1) return dp[index][nT0][kk];

    //base case
    if (index == str.length()) return 0;

    ll ret = 0, ret1 = 0, ret2 = 0, ret3 = 0;
    //neither
    ret1 += go(index+1, nT0, kk);
    //change to first character
    ll cost = (ll)(not(str[index] == refer[0]));
    if (kk >= cost) ret2 += go(index+1, nT0+1, kk-cost);
    //change to second character
    cost = (ll)(not(str[index] == refer[1]));
    if (kk >= cost) ret3 += nT0+go(index+1, nT0, kk-cost);

    return dp[index][nT0][kk] = max({ret, ret1, ret2, ret3});
}

void solve() {
    scll(n, k);
    cin >> str;
    cin >> refer;

    if (refer[0] == refer[1]) {
        kount = 0;
        for (ll i = 0; i < str.length(); i++) {
            if (str[i] == refer[0]) {
                kount++;
            }
        }
        kount = min(kount+k, n);
        prl((kount*(kount-1))/2);
        return;
    }

    Mem(dp, -1);
    cout << go(0, 0, k) << endl;
}

int main() {
    test = 1;
    //while(scl(test) == 1)
    while(test--) solve();
}

