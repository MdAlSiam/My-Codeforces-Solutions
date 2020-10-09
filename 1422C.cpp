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
string str;
ll cs[maxn];
ll tenPowered[maxn];

void solve() {
    /// 1422C, Score:1000
    // Precalculation
    ll tenny = 1, oneey = 1;
    for (ll i = 0; i < maxn; i++) {
        cs[i] = ((tenny%mod)*(oneey%mod))%mod;
        if (i > 0) cs[i] = (cs[i]%mod + cs[i-1]%mod)%mod;
        tenPowered[i] = tenny%mod;
        tenny = ((tenny%mod) * (10%mod))%mod;
        oneey = ((oneey%mod) + (1%mod))%mod;
    }

    cin >> str;
    n = str.length();

    ans = 0;

    for (int i = 0; i < n; i++) {
        ll nPosRight = n-i-1;
        ll nPosLeft = i;
        ll num = (ll)(str[i] - '0');

        if (nPosRight > 0) {
            ans = (ans%mod + ((num%mod)*(cs[nPosRight-1]%mod)%mod)%mod)%mod;
        }
        ll tot = (nPosLeft*(nPosLeft+1))/2;
        tot = ((tot%mod)+(0%mod))%mod;
        ans = (ans%mod + ((tot%mod)*(num%mod)*(tenPowered[nPosRight]%mod))%mod)%mod;

        //cout << num << " " << nPosLeft <<  " " << nPosRight << " " << cs[nPosRight-1] << " " << tenPowered[nPosRight] << " " << ans << endl;
    }

    cout << ans << endl;
}

int main() {
    test = 1;
    //while (scl(test) == 1)
    while (test--) solve();
}



