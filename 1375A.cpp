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

ll ara[10000];

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    For(i, 1, n+1) scl(ara[i]);

    for(ll i = 2; i < n; i += 2){
        a = ara[i-1];
        ll bb = abs(ara[i]);
        ll cc = abs(ara[i+1]);

        b = -bb;
        c = -cc;
        if((b-a >= 0 && c-b <= 0) or (b-a <= 0 && c-b >= 0)){
            ara[i] = b;
            ara[i+1] = c;
            continue;
        }

        b = -bb;
        c = cc;
        if((b-a >= 0 && c-b <= 0) or (b-a <= 0 && c-b >= 0)){
            ara[i] = b;
            ara[i+1] = c;
            continue;
        }

        b = bb;
        c = -cc;
        if((b-a >= 0 && c-b <= 0) or (b-a <= 0 && c-b >= 0)){
            ara[i] = b;
            ara[i+1] = c;
            continue;
        }

        b = bb;
        c = cc;
        if((b-a >= 0 && c-b <= 0) or (b-a <= 0 && c-b >= 0)){
            ara[i] = b;
            ara[i+1] = c;
            continue;
        }
    }

//    ll mk, pk;
//    mk = pk = 0;
//    For(i, 2, n+1){
//        if(ara[i] - ara[i-1] <= 0) mk++;
//        if(ara[i] - ara[i-1] >= 0) pk++;
//    }
//
//    prll(mk, pk);

    For(i, 1, n+1) printf("%lld ", ara[i]);
    printf("\n");
}
}}

/*******************************************************************************************/
