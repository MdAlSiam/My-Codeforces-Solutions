#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll n, m, k;
ll a, b, c;
ll x, y, z;
ll t, test, temp;

int main(){scl(test); while(test--){
    scl(n);
    char x[n+4];
    scanf(" %s", x);

    ll kount = 0;
    ll ans = 0;

    for(ll i = n-1; i >= 0; i--){
        if(x[i] == 'A'){
            ans = max(ans, kount);
            kount = 0;
        }
        else{
            kount++;
        }
    }

    printf("%lld\n", ans);
}}



