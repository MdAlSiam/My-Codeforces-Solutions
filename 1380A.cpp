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

ll ara[1100], f_min[1100], f_minin[1100], bmin[1100], bminin[1100];

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    For(i, 1, n+1)
        scl(ara[i]);

    f_min[1] = ara[1];
    f_minin[1] = 1;
    for(ll i = 2; i <= n; i++){
        if(ara[i] <= f_min[i-1]){
            f_min[i] = ara[i];
            f_minin[i] = i;
        }
        else{
            f_min[i] = f_min[i-1];
            f_minin[i] = f_minin[i-1];
        }
    }

    bmin[n] = ara[n];
    bminin[n] = n;
    for(ll i = n-1; i >= 1; i--){
        if(ara[i] <= bmin[i+1]){
            bmin[i] = ara[i];
            bminin[i] = i;
        }
        else{
            bmin[i] = bmin[i+1];
            bminin[i] = bminin[i+1];
        }
    }


    ans = -1;

    For(i, 2, n){
        if(f_min[i-1] < ara[i] and bmin[i+1] < ara[i]){
            ans = 1;
            prys;
            printf("%lld %lld %lld\n", f_minin[i-1], i, bminin[i+1]);
            break;
        }
    }

    if(ans == -1){
        prno;
    }
}
}}

/*******************************************************************************************/

