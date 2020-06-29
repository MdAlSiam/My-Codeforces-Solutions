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

vector<ll> v;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    v.clear();
    scll(n, k);
    For(i, 0, n){
        scl(t);
        if(t % k == 0) v.pb(0);
        else{
            ll kk = t / k;
            kk++;
            v.pb(k*kk - t);
        }
    }
    sort(v.begin(), v.end());
    ll maxi = v[0];

    ll multiplier = 0;

    For(i, 1, v.size()){
        if(v[i] == 0) continue;
        if(v[i] == v[i-1]){
            multiplier++;
            t = multiplier*k + v[i];
            maxi = max(maxi, t);
        }
        else{
            multiplier = 0;
            t = multiplier*k + v[i];
            maxi = max(maxi, t);
        }
    }

    if(maxi == 0) maxi--;

    prl(maxi+1);
}
}}

/*******************************************************************************************/

