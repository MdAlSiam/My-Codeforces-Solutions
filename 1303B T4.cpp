#include <bits/stdc++.h>
using namespace std;

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

void fileornot(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

int main(){
//fileornot();
scl(test); while(test--){
    ll active, passive, hi_req, lo_req, active_used, passive_used, passive_covered, max_so_far;
    scl(n);
    scll(active, passive);
    hi_req = n / 2;
    if(hi_req*2 != n) hi_req++;
    lo_req = n - hi_req;

    active_used = hi_req / active;
    if(hi_req % active == 0) passive_used = active_used - 1;
    else passive_used = active_used;

    passive_covered = passive_used*passive;
    max_so_far = hi_req + passive_covered;
    if(lo_req > passive_covered) max_so_far += (lo_req - passive_covered);

    printf("%lld\n", max_so_far);

}}
///Test(Given, Scratch, Corner data, Code Counter)

