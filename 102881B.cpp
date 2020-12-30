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
ll a, b, c, u, v;
ll x, y, z = -1, maxi, mini;

dd findArea(dd s1, dd s2, dd s3) {
    dd halfPerimeter = (s1+s2+s3)/2.00;
    return sqrt(halfPerimeter*(halfPerimeter-s1)*(halfPerimeter-s2)*(halfPerimeter-s3));
}

void solve() {
    ll ara[3];
    cin >> ara[0] >> ara[1] >> ara[2] >> k;
    sort(ara, ara+3);

    dd ans = 0.00;
    
    dd hypotenuse = sqrt(ara[1]*ara[1]+ara[2]*ara[2]);
    if (hypotenuse+eps <= ara[0]*1.00+k*1.00) ans = 0.50*ara[1]*ara[2];

    if (ara[0]+k < ara[1]+ara[2]) {
        dd ansHere = findArea(ara[0]*1.00+k*1.00, ara[1]*1.00, ara[2]*1.00);
        if (ansHere >= ans+eps) ans = ansHere;
    }

    cout << fixed << setprecision(9) << ans << endl;
}

int main() {
    freopen("sticks.in", "r", stdin);
    test = 1;
    scl(test);
    while (test--) solve();
}
