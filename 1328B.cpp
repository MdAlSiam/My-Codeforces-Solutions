#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x);
#define prll(x, y) printf("%lld %lld\n", x, y);

#define For(i, x, y) for(ll i = x; i < y; i++)

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

///Focus fully
///Statement+Examples
///Analysis+Solution

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

int main(){scl(test); while(test--){
    scll(n, k);

    ll kount = 0;
    ll kk = k;
    while(1){
        kount++;
        if(kk - kount > 0) kk -= kount;
        else {kount--; break;}
    }

    a = n-1-kount;
    ll sum = ((kount+1)*kount)/2;
    b = n - (k - sum) + 1;
    for(ll i = 1; i <= n; i++){
        if(i == a || i == b) printf("b");
        else printf("a");
    }
    printf("\n");
}}

///Test(Given, Scratch, Corner data, Code Counter)

