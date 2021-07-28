/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x)              scanf("%lld", &x)
#define scll(x, y)          scanf("%lld %lld", &x, &y)
#define scd(x)              scanf("%lf", &x)
#define scdd(x, y)          scanf("%lf %lf", &x, &y)

#define prl(x)              printf("%lld\n", x)
#define prll(x, y)          printf("%lld %lld\n", x, y)
#define prYes               printf("YES\n")
#define prNo                printf("NO\n")
#define aNewLine            printf("\n")

#define ON(n, i)            (n|(1LL<<i))
#define OFF(n, i)           (n&(~(1LL<<i)))
#define CHK(n, i)           (n&(1LL<<i))

#define For(i, x, y)        for(ll i = x; i < y; i++)
#define Mem(ara, x)         memset(ara, x, sizeof(ara))

#define pb                  push_back
#define pll                 pair<ll, ll >
#define ff                  first
#define ss                  second

#define maxn                200005LL ///2x10^5 + 5

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7

ll t, test, temp;
ll n, m, k, kount[maxn];
ll a, b, c, ans[maxn], u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
ll added[maxn];
string str;

void solve2() {
    scll(n, k);
    vector<ll> vec[n+4];

    For (i, 0, n+1) {
        vec[i].clear();
    }

    For (i, 1, n+1) {
        scl(t);
        vec[t].pb(i);
    }

    ll colorNo = 1;

    ll ansara[n+1];
    Mem(ansara, 0);

    ll totToAdd = 0;

    For (i, 1, n+1) {
        if (vec[i].size() >= k) {

        }
        else {
            totToAdd += vec[i].size();
        }
    }

    totToAdd -= (totToAdd%k);

    ll totAdded = 0;

    For (i, 1, n+1) {
        if (vec[i].size() >= k) {
            ll colorHere = 1;
            For (j, 0, vec[i].size()) {
                if (colorHere <= k) {
                    ansara[vec[i][j]] = colorHere;
                    colorHere += 1;
                }
                else break;
            }
        }
        else {
            For (j, 0, vec[i].size()) {
                if (totAdded >= totToAdd) break;
                if (colorNo > k) colorNo = 1;
                ansara[vec[i][j]] = colorNo;
                totAdded += 1;
                colorNo += 1;
            }
        }
    }

    For (i, 1, n+1) cout << ansara[i] << " ";
    aNewLine;
}
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve2();
}
