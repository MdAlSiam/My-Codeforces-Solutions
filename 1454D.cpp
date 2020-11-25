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

void calculate(ll n) {
    ll num = n;
    ll root = sqrt(num);

    ll factors[root+10];
    ll power[root+10];

    ll index = 0;

    ll factorKount = 0;

    if (num%2 == 0) {
        factors[index] = 2;
        factorKount = 0;
        while (num%2 == 0) {
            num /= 2;
            factorKount++;
        }
        power[index] = factorKount;
        index++;
    }

    for (ll i = 3; i <= root; i += 2) {
        if (num % i == 0) {
            factors[index] = i;
            factorKount = 0;
            while (num%i == 0) {
                num /= i;
                factorKount++;
            }
            power[index] = factorKount;
            index++;
        }
    }

    if (num != 1) {
        factors[index] = num;
        num /= num;
        power[index] = 1;
        index++;
    }

    ll factorWithMaxPower;
    ll theMaxPower = -1;

    For (i, 0, index) {
        if (power[i] > theMaxPower) {
            theMaxPower = power[i];
            factorWithMaxPower = factors[i];
        }
    }

    prl(theMaxPower);
    ll used = 1;
    For (i, 1, theMaxPower) {
        printf("%lld ", factorWithMaxPower);
        used *= factorWithMaxPower;
    }
    prl(n/used);
}

void solve() {
    scl(n);
    calculate(n);
}

int main() {
    test = 1;
    //while (scl(test) == 1)
    scl(test);
    while (test--) solve();
}