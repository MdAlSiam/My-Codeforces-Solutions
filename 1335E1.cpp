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

#define maxn 26 ///2x10^5 // n*log n in 1 sec
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

	ll v[n+1];
	ll cnt[maxn+1][n+1];
	std::vector<ll> pos[maxn+1];
	ll freq[maxn+1];

	For(i, 0, maxn+1) pos[i].clear();
	For(i, 0, maxn+1) freq[i] = 0;
	For(i, 0, maxn+1) cnt[i][0] = 0;

	ll ans = -1;

	For(i, 1, n+1){

		cin >> v[i];

		For(j, 1, maxn+1)
			cnt[j][i] = cnt[j][i-1] + (j == v[i]);
		
		pos[v[i]].pb(i);
		freq[v[i]]++;

		ans = max(ans, freq[v[i]]);
	}

	For(i, 1, maxn+1){
		For(sz, 1, (n/2)+1){
			if(sz*2 <= pos[i].size()){
				ll leftlast = pos[i][sz-1];
				ll rightlast = pos[i][pos[i].size()-sz];

				ll middler_size = 0;

				For(middler, 1, maxn+1){
					middler_size = max(middler_size, 
						cnt[middler][rightlast-1] - cnt[middler][leftlast]
					);
				}
				ans = max(ans, 2*sz+middler_size);
			}
		}
	}

	cout << ans << endl;

}}
///Test(Given, Scratch, Corner data, Code Counter)
