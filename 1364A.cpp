using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)

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
ll x, y, z;

ll ara[100005];
ll fcs[100005];
ll bcs[100005];

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    scll(n, x);
    For(i, 1, n+1) scl(ara[i]);

    fcs[0] = bcs[n+1] = 0;
    ll fromfirst, fromlast;
    fromfirst = fromlast = -1;

    For(i, 1, n+1) {
        fcs[i] = fcs[i-1] + ara[i];
        if(fcs[i] % x != 0 && fromfirst == -1) fromfirst = i;
    }

    if(fcs[n] % x != 0){
        prl(n);
        continue;
    }

    for(ll i = n; i >= 1; i--){
        bcs[i] = bcs[i+1] + ara[i];
        if(bcs[i] % x != 0 && fromlast == -1) fromlast = i;
    }

    if(fromfirst == -1 && fromlast == -1){
        printf("-1\n");
        continue;
    }

    ll tosub;
    if(fromfirst == -1) tosub = n-fromlast+1;
    else if(fromlast == -1) tosub = fromfirst;
    else tosub = min(  fromfirst, n-fromlast+1 );

    prl(n - tosub );
}
}}

/*******************************************************************************************/

