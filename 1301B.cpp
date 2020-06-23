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

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
scl(test); while(test--){
	scl(n);
	ll ara[n];
	ll mini = inf, maxi = -2, minin, maxin;
	For(i, 0, n) {
		scl(ara[i]);
	}
	For(i, 0, n){
		if(ara[i] == -1) continue;
		if(ara[i] < mini && ((i < n-1 && ara[i+1] == -1) ||(i > 0 && ara[i-1] == -1)) ){
			mini = ara[i];
			minin = i;
		}
		if(ara[i] > maxi && ((i < n-1 && ara[i+1] == -1) ||(i > 0 && ara[i-1] == -1)) ){
			maxi = ara[i];
			maxin = i;
		}
	}

	if(mini == inf) k = 69;
	else k = mini + ((maxi - mini) / 2);

	m = -2;
	if(ara[0] == -1) ara[0] = k;
	For(i, 1, n){
		if(ara[i] == -1) ara[i] = k;
		m = max(abs(ara[i]-ara[i-1]), m);
	}

	printf("%lld %lld\n", m, k);
}}
///Test(Given, Scratch, Corner data, Code Counter)