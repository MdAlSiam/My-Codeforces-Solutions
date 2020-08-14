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
ll a, c, ans;
ll x, y, z = -1;

ll init[10000006];

/*_________________________________________________________________________________________*/

ll factorial(ll num){
    ll ret = 1;
    for(int i = 1; i <= num; i++){
        ret = ((ret%mod)*(i%mod))%mod;
    }
    return ret;
}

ll bigmod(ll b, ll p){
    if(p == 0) return 1;
    if(p & 1) return ((b%mod)*bigmod(b, p-1))%mod;
    else{
        ll ret = bigmod(b, p/2);
        return ((ret%mod)*(ret%mod))%mod;
    }
}

int main(){
    scl(n);
    ans = factorial(n) - bigmod(2, n-1);
    //if(ans < 0) ans += mod;
    prl(ans);
}


/*******************************************************************************************/

