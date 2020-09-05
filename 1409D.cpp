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
ll a, b, c, ans, u, v, s;
ll x, y, z = -1, maxi, mini;

string str;
string make;

void solve() {
    cin >> str;
    cin >> s;

    ll cs[str.length()];

    cs[0] = str[0] - '0';

    For (i, 1, str.length()) {
        cs[i] = cs[i-1]+(str[i]-'0');
    }

    if (cs[str.length()-1] <= s) {
        prl(z+1);
        return;
    }

    ans = 0;
    ll num = 0;
    bool found = false;
    For (i, 0, str.length()) {
        if (false and cs[i] == s and !found) {
            found = true;
            ans *= 10;
            ans += (str[i] - '0');
        }
        else if (cs[i] >= s and !found) {
            found = true;
            ans++;
            ans *= 10;
        }
        else if (!found) {
            ans *= 10;
            ans += (str[i] - '0');
        }
        else {
            ans *= 10;
        }

        num *= 10;
        num += (str[i] - '0');
    }

    prl(ans-num);
}

int main() {
    test = 1;
    while(scl(test) == 1)
    while(test--) solve();
}


