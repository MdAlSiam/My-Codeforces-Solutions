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
fileornot();
scl(test); while(test--){

	scl(n);
	ll ara[n+4], ara2[n+4], reserve[n+4];

	bool strictly_greater = true, strictly_lesser = true;

	For(i, 0, n){
		scl(ara[i]);
		if(i > 0 && ara[i] <= ara[i-1]) strictly_greater = false;
		if(i > 0 && ara[i] >= ara[i-1]) strictly_lesser = false; 
		ara2[i] = ara[i];
		reserve[i] = ara[i];
	}

	// if(strictly_greater || strictly_lesser){
	// 	printf("YES\n");
	// 	continue;
	// }

	ll fwd = 0, bwd = n-1;

	ara[0] -= ara[0];
	ll req;

	For(i, 1, n){
			req = ara[i-1]+1;
			if(ara[i] >= req) ara[i] = req;
			else{fwd = i-1; break;}
			if(i == n-1 && ara[i] > ara[i-1]) fwd = n-1;
	}

	ara2[n-1] -= ara2[n-1];

	for (ll i = n-2; i >= 0; i--){
		req = ara2[i+1]+1;
		if(ara2[i] >= req) ara2[i] = req;
		else{bwd = i+1; break;}
		if(i == 0 && ara2[i] > ara2[i+1]) bwd = 0;
	}

	//printf("%lld %lld\n", fwd, bwd);

	if(bwd <= fwd) printf("YES\n");
	else printf("NO\n");


}}
///Test(Given, Scratch, Corner data, Code Counter)
