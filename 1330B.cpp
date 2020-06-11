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

///Focus fully
///Statement+Examples
///Analysis+Solution

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

map<ll, ll> mp;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
scl(test); while(test--){

	scl(n);
	ll ara[n+5], cpy[n+5];

	For(i, 1, n+1){
		scl(ara[i]);
		cpy[i] = ara[i];
	}

	ll maxf[n+5], minf[n+5];
	ll maxb[n+5], minb[n+5];
	ll diff_f[n+5], diff_b[n+5];

	maxf[0] = -1;
	minf[0] = inf;
	For(i, 1, n+1){
		maxf[i] = max(maxf[i-1], ara[i]);
		minf[i] = min(minf[i-1], ara[i]);
	}

	maxb[n+1] = -1;
	minb[n+1] = inf;
	for(ll i = n; i >= 1; i--){
		maxb[i] = max(maxb[i+1], ara[i]);
		minb[i] = min(minb[i+1], ara[i]);
	}

	mp.clear();
	diff_f[1] = 1;
	mp[ara[1]] = 1;
	For(i, 2, n+1){
		if(!mp.count(ara[i])) {
			diff_f[i] = diff_f[i-1]+1;
			mp[ara[i]]++;
		}
		else diff_f[i] = diff_f[i-1];
	}

	mp.clear();
	diff_b[n] = 1;
	mp[ara[n]] = 1;
	for(ll i = n-1; i > 0; i--){
		if(!mp.count(ara[i])){
			 diff_b[i] = diff_b[i+1]+1;
			 mp[ara[i]]++;
		}
		else diff_b[i] = diff_b[i+1];
	}

	// for(ll i = 1; i <= n; i++) printf(i == n ? "%d\n" : "%d ", ara[i] );
	// for(ll i = 1; i <= n; i++) printf(i == n ? "%d\n" : "%d ", maxf[i] );
	// for(ll i = 1; i <= n; i++) printf(i == n ? "%d\n" : "%d ", minf[i] );
	// for(ll i = 1; i <= n; i++) printf(i == n ? "%d\n" : "%d ", maxb[i] );
	// for(ll i = 1; i <= n; i++) printf(i == n ? "%d\n" : "%d ", minb[i] );

	ll ansf[n+4], anss[n+4], index = 0;
	for(ll i = 1; i < n; i++){
		if(maxf[i] == i && minf[i] == 1 && 
			maxb[i+1] == n-i && minb[i+1] == 1
			&& diff_f[i] == i && diff_b[i+1] == n-i){

			ansf[index] = i;
			anss[index] = n-i;
			index++;
		}
	}

	prl(index);
	For(i, 0, index){
		prll(ansf[i], anss[i]);
	}
}}
///Test(Given, Scratch, Corner data, Code Counter)
