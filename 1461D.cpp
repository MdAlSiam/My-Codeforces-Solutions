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
ll x, y, z = -1, maxi, mini, nQueries, total;
ll ara[maxn];
map<ll, ll> possibleTotals;

void findPossibleTotals(ll lo, ll hi) {
    if (lo > hi) return;
    if (lo == hi) {
        possibleTotals[ara[lo]] = 1;
        return;
    }

    ll mid = ara[lo]+((ara[hi]-ara[lo])>>1);

    ll sum = 0;
    ll secondPortionStarts = -1;

    For (i, lo, hi+1) {
        if (secondPortionStarts == -1 and ara[i] > mid) 
            secondPortionStarts = i;
        sum += ara[i];
    }

    possibleTotals[sum] = 1;

    if (secondPortionStarts == -1) return;
    if (secondPortionStarts-1 >= 1) findPossibleTotals(lo, secondPortionStarts-1);
    findPossibleTotals(secondPortionStarts, hi);
}

void solve() {
    scll(n, nQueries);
    For (i, 1, n+1) scl(ara[i]);
    sort(ara+1, ara+n+1);
    possibleTotals.clear();
    findPossibleTotals(1, n);
    while (nQueries--) {
        ll totalCandidate;
        scl(totalCandidate);
        if (possibleTotals.count(totalCandidate)) prYes;
        else prNo;
    }
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}
