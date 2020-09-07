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
bool no;
string str;

void solve() {

    scll(n, k);
    ll parity[k];
    Mem(parity, -1);
    cin >> str;
    str = "#"+str;
    ll len = str.length();

    no = false;

    For (i, 1, len) {
        ll pos = i%k;

        if (str[i] == '?') {
            continue;
        }

        if (parity[pos] == -1) {
            parity[pos] = (str[i] - '0');
            continue;
        }

        ll candidate = (str[i] - '0');

        if (parity[pos] != candidate) {
            no = true;
            //printf("No at pos %lld\n", i);
        }

    }

    for (ll i = 1; i+k-1 < len; i = i+k) {
        ll zero, one, what;
        zero = one = what = 0;

        for (ll j = i; j < i+k; j++) {
            ll poss = j%k;
            if (str[j] == '?') {
                if (parity[poss] == 1) one++;
                else if (parity[poss] == 0) zero++;
                else what++;
            }
            else if (str[j] == '1') one++;
            else zero++;
        }

        if (zero <= (k/2) and one <= (k/2)) {
            //printf("-> %lld %lld %lld %lld\n", i, zero, one, what);
        }
        else {
            no = true;
            //printf("No at substring starts at %lld\n", i);
        }
    }

    if (no) prno;
    else prys;
}

int main() {
    test = 1;
    while (scl(test) == 1)
    while (test--) solve();
}

