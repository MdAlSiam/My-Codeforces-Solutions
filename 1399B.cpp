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

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k, kount;
ll a[56], b[56], c, ans;
ll x, y, z = -1;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    For(i, 0, n) scl(a[i]);
    For(i, 0, n) scl(b[i]);

    ll min_a, min_b;
    min_a = min_b = inf;

    For(i, 0, n)
        min_a = min(min_a, a[i]);
    For(i, 0, n)
        min_b = min(min_b, b[i]);

    For(i, 0, n) a[i] -= min_a;
    For(i, 0, n) b[i] -= min_b;

    ans = 0;

    For(i, 0, n){
        if(a[i] > 0 and b[i] > 0){
            ll tosub = min(a[i], b[i]);
            ans += tosub;
            a[i] -= tosub;
            b[i] -= tosub;
        }
    }

    For(i, 0, n)  ans += a[i] + b[i];

    prl(ans);
}
}}

/*******************************************************************************************/

