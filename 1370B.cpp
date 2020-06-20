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

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    scl(n);
    n += n;
    ll oddin[n+10], evin[n+10], in1, in2;
    in1 = in2 = 0;

    For(i, 1, n+1){
        scl(t);
        if(t & 1) oddin[in1++] = i;
        else evin[in2++] = i;
    }

    //prll(in1, in2);

    if( (in1 & 1) && (in2 & 1) ) {
    for(ll i = 0; i+1 < in1; i += 2){
        prll(oddin[i], oddin[i+1]);
    }
    for(ll i = 0; i+1 < in2; i += 2){
        prll(evin[i], evin[i+1]);
    }
    continue;
    }

    bool baddisi = false;
    for(ll i = 0; i < in1-1; i += 2){
        if(i == in1-2) { baddisi = true; continue;}
        prll(oddin[i], oddin[i+1]);
    }
    for(ll i = 0; i < in2-1; i += 2){
        if(baddisi == false && i == in2-2) continue;
        prll(evin[i], evin[i+1]);
    }
}
}}

/*******************************************************************************************/

