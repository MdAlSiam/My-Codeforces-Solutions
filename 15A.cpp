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
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

typedef struct {ll center; ll radius;} home;

bool compare (home a, home b) {
    return a.center < b.center;
}

void solve() {
    scll(n, t);
    home homes[n];
    For (i, 0, n) {
        scll(homes[i].center, homes[i].radius);
    }

    sort(homes, homes+n, compare);

    ans = 2;

    For (i, 1, n) {
        ll doublespace = 2*(homes[i].center-homes[i-1].center)-homes[i].radius-homes[i-1].radius;
        if (doublespace == t+t) ans += 1;
        else if (doublespace > t+t) ans += 2;
    }

    prl(ans);
} 
 
int32_t main() {
    test = 1;
    // scl(test);
    while (test--) solve();
}
