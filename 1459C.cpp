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

#define maxn 200005 ///2x10^5 + 5
//#define maxn 1000006 ///10^6 + 6
//#define maxn 1000000009 ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

void solve() {
    scll(n, m);
    ll ara[n], bra[m];
    For (i, 0, n) scl(ara[i]);
    For (i, 0, m) scl(bra[i]);
    if (n <= 2) {
        For (i, 0, m) {
            ans = ara[0]+bra[i];
            For (j, 1, n) {
                ans = __gcd(ans, ara[j]+bra[i]);
            }
            printf("%lld ", ans);
        }
        aNewLine;
        return;
    }
    ll gcdPairElement = abs(ara[1]-ara[0]);
    For (i, 2, n) { 
        gcdPairElement = __gcd(gcdPairElement, abs(ara[i]-ara[i-1]));
    }

    For (i, 0, m) {
        ans = __gcd(gcdPairElement, ara[0]+bra[i]);
        printf("%lld ", ans);
    }
    aNewLine;
}

int main() {
    test = 1;
    //scl(test);
    while (test--) solve();
}
