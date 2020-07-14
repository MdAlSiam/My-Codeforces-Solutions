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
ll a, b, c, ans;
ll x, y, z = -1;

vector<ll> v;

/*_________________________________________________________________________________________*/

ll prllprimefactors(ll n){
    ll num = n;
    ll root = sqrt(num);
    ll ara[root+10];
    ll index = 0;

    if(num % 2 == 0){
        ara[index++] = 2;
        while(num % 2 == 0) num /= 2;
    }

    for(ll i = 3; i <= root; i += 2){
        if(num % i == 0){
            ara[index++] = i;
            while(num % i == 0){
                num /= i;
            }
        }
        if(num == 1) break;
    }

    if(num != 1) ara[index++] = num;

    return ara[0];
}


int32_t main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    ll div = prllprimefactors(n);
    if(div == n) printf("1 %lld\n", n-1);
    else prll(n/div, n - (n/div));
}
}}

/*******************************************************************************************/

