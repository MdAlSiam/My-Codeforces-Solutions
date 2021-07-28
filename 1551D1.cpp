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

ll ara[maxn];
string str;

bool debug = false;

void solve2() {
    ll nRows, nCols, nHoriz, nVert;

    scll(nRows, nCols);
    scl(nHoriz);
    nVert = ((nRows*nCols)/2)-nHoriz;

    if (nRows & 1) {
        if (nCols%2 == 0 and nCols/2 <= nHoriz) {
            nHoriz -= (nCols/2);
            nRows--;
        }
    }

    if (nRows == 0) {
        if (nVert == 0) {
            prYes;
            return;
        }
        else {
            prNo;
            return;
        }
    }

    ll horizOccupiesCols = 2*((nHoriz+nRows-1)/nRows);
    ll rowsRemainsInHorizPlace = nRows-(nHoriz%nRows);
    if (rowsRemainsInHorizPlace == nRows) rowsRemainsInHorizPlace = 0;

    if (rowsRemainsInHorizPlace) {
        if (rowsRemainsInHorizPlace%2 == 0 and rowsRemainsInHorizPlace <= nVert) {
            nVert -= rowsRemainsInHorizPlace;
        }
        else {
            if (debug) printf("1 ");
            prNo; 
            return;
        }
    }

    ll remCols = nCols-horizOccupiesCols;

    if (remCols < 0) {
        if (debug) printf("2 ");
        prNo;
        return;
    }

    if (remCols) {
        if (nRows%2 == 0 and (nRows/2)*remCols == nVert) {
            if (debug) printf("3 ");
            prYes;
            return;
        }
        else {
            if (debug) printf("4 ");
            prNo;
            return;
        }
    }
    else {
        if (nVert == 0) {
            if (debug) printf("5 ");
            prYes;
            return;
        }
        else {
            if (debug) printf("6 ");
            prNo;
            return;
        }
    }
}
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve2();
}
