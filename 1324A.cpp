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

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

int main(){scl(test); while(test--){
    scl(n);
    ll ara[n+2];
    ll sum = 0;
    For(i, 0, n) {scl(ara[i]); sum += ara[i];}

    bool yes = true;

    sort(ara, ara+n);

    For(i, 1, n){
        if((ara[i] - ara[i-1]) % 2 == 0){}
        else yes = false;
    }

    if(yes) printf("YES\n");
    else printf("NO\n");
}}

