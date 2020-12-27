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

void solve() {
    scll(n, m);
    char mat[n+1][m+1];
    For (i, 0, n) scanf(" %s", mat[i]);
    
    ll csgrid[n+1][m+1];
    For (i, 0, n) {
        For (j, 0, m) {
            if (j == 0) {
                if (mat[i][j] == '*') csgrid[i][j] = 1;
                else csgrid[i][j] = 0;
            }
            else {
                if (mat[i][j] == '*') csgrid[i][j] = csgrid[i][j-1]+1;
                else csgrid[i][j] = csgrid[i][j-1];
            }
        }
    }
    
    ans = 0;

    For (i, 0, n) {
        For (j, 0, m) {
            if (mat[i][j] == '*') {
                ans++;
                ll ro = i;
                ll colBegin = j, colEnd = j;
                while (true) {
                    ro++;
                    colBegin--;
                    colEnd++;
                    if (0 <= ro and ro < n and 0 <= colBegin and colEnd < m) {
                        // Don't care your feelings
                        ll totalPlaces = colEnd-colBegin+1;
                        ll totalAsterisks = csgrid[ro][colEnd]-csgrid[ro][colBegin];
                        if (mat[ro][colBegin] == '*') totalAsterisks++;
                        if (totalAsterisks == totalPlaces) ans++;
                        else break;
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }

    prl(ans);
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}
