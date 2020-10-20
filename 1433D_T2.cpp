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
bool allTheSame;

struct number {
    ll num; 
    ll index;
};

bool compare(number aa, number bb) {
    return aa.num < bb.num;
}

void solve() {
    scl(n);
    number numbers[n];
    allTheSame = true;
    For (i, 0, n) {
        scl(numbers[i].num);
        numbers[i].index = i+1;
    }

    sort(numbers, numbers+n, compare);

    For (i, 1, n) {
        if (numbers[i].num != numbers[i-1].num) {
            allTheSame = false;
        }
    }

    if (allTheSame) {
        prNo;
        return;
    }

    ll lastNonLastIndex = n-1;
    for (ll i = n-2; i >= 0; i--) {
        if (numbers[i].num != numbers[i+1].num) {
            lastNonLastIndex = i;
            break;
        }
    }

    prYes;

    for (ll i = lastNonLastIndex+1; i < n-1; i++) {
        prll(numbers[lastNonLastIndex].index, numbers[i].index);
    }
    for (ll i = 0; i <= lastNonLastIndex; i++) {
        prll(numbers[n-1].index, numbers[i].index);
    }
}

int main() {
    test = 1;
    while (scl(test) == 1)
    while (test--) solve();
}
