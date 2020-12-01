/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll int 
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
ll ara[502];
ll dp[502][502][502];

ll solve(ll index, ll lastNum, ll curr_x) {
    if (index > n) return 0;

    if (dp[index][lastNum][curr_x] != -1) return dp[index][lastNum][curr_x];

    ll ansF = 100000;

    if (ara[index] > curr_x and curr_x >= lastNum) {
        ansF = min(ansF, 1+solve(index+1, curr_x, ara[index]));
    }
    if (ara[index] >= lastNum) {
        ansF = min(ansF, solve(index+1, ara[index], curr_x));
    }

    return dp[index][lastNum][curr_x] = ansF;
}

void solve() {
    scanf("%d %d", &n, &x);
    For (i, 1, n+1) {
        scanf("%d", ara+i);
    }

    For (i, 0, n+2) {
        For (j, 0, 502) {
            For (k, 0, 502) {
                dp[i][j][k] = -1;
            }
        }
    }

    ans = solve(1, 0, x);

    if (ans > n) {
        printf("-1\n");
    }
    else {
        printf("%d\n", ans);
    }
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}

