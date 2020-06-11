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
	scll(n, m);
	if(n == m && n == 2){
		printf("WB\nBB\n");
		continue;
	}

	for(int i = 1; i <= n-1; i++){
		for(int j = 1; j <= m; j++){
			if(j == 1) printf("W");
			else printf("B");
		}
		printf("\n");
	}
	for(int j = 1; j <= m; j++){
			if(j == 1) printf("B");
			else if(j == 2 && m != 2) printf("W");
			else printf("B");
	}
	printf("\n");
}}
///Test(Given, Scratch, Corner data, Code Counter)
