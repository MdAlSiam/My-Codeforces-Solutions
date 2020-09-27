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

#define maxn 200005 ///2x10^5 + 5
//#define maxn 1000006 ///10^6 + 6
//#define maxn 1000000009 ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf INT_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

vector<ll> pos[300055];
ll maxgap[300055];

void solve() {
    // Score: 1500
    scl(n);
    For (i, 0, n+2) pos[i].clear();
    For (i, 0, n+2) maxgap[i] = -1;
    for (ll i = 1; i <= n; i++) {
        scl(t);
        pos[t].pb(i);
    }

    For (i, 1, n+1) {
        ll maxhere = -1;


        if (pos[i].size() == 0) continue;

        if (pos[i].size() == 1) {
            maxhere = max(maxhere, pos[i][0]-1);
            maxhere = max(maxhere, n-pos[i][0]);
        }

        for (ll j = 0; j < pos[i].size(); j++) {
            if (j == 0) {
                maxhere = max(maxhere, pos[i][j]-1);
                continue;
            }

            ll _maxhere = pos[i][j] - pos[i][j-1] - 1;
            maxhere = max(maxhere, _maxhere);

            if (j == pos[i].size()-1 and pos[i][j] != n) {
                maxhere = max(maxhere, n-pos[i][j]);
            }
        }
        maxgap[i] = maxhere;
    }

//    For (i, 1, n+1) {
//        cout << "---" << i << " " << maxgap[i] << endl;
//    }

    ll maxgapwalanumber[n+200];
    For (i, 0, n+200) maxgapwalanumber[i] = inf;

    for (int i = 1; i <= n; i++) {

        if (maxgap[i] == -1) continue;

        if (maxgapwalanumber[maxgap[i]] > i) {
            maxgapwalanumber[maxgap[i]] = i;
        }
    }

//    For (i, 0, n) {
//        cout << "Maxgap " << i << " Number " << maxgapwalanumber[i] << endl;
//    }

    ll mintillnow = inf;
    For (i, 0, n) {

        if (maxgapwalanumber[i] < mintillnow) {
            mintillnow = maxgapwalanumber[i];
        }

        if (mintillnow == inf) printf("-1 ");
        else printf("%lld ", mintillnow);

    }

    printf("\n");
}

int main() {
    test = 1;
    while (scl(test) == 1)
    while (test--) solve();
}

