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
//ll x, y, z;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
//scl(test); while(test--){
	scl(n);
	ll sclx, scly;
	scll(sclx, scly);

	ll x[n], y[n];
	For(i, 0, n) scll(x[i], y[i]);

	sort(x, x+n);
	sort(y, y+n);

	ll ans[4][3], ansin = 0;
	Mem(ans, -1);

	For(i, 1, n){
		if(x[i] >= sclx){
			ans[ansin][0] = i;
			ans[ansin][1] = x[i-1];
			ans[ansin][2] = scly;
			break; 
		}
	}
	if(ans[ansin][0] == -1){
		ans[ansin][0] = n;
		ans[ansin][1] = x[n-1];
		ans[ansin][2] = scly;
	}

	ansin++;;
	for(ll i = n-2; i >= 0; i--){
		if(x[i] <= sclx){
			ans[ansin][0] = n-i-1;
			ans[ansin][1] = x[i+1];
			ans[ansin][2] = scly;
			//ansin++;
			break;
		}
	}
	if(ans[ansin][0] == -1){
		ans[ansin][0] = n;
		ans[ansin][1] = x[0];
		ans[ansin][2] = scly;
		//ansin++;
	}

	ansin++;
	For(i, 1, n){
		if(y[i] >= scly){
			ans[ansin][0] = i;
			ans[ansin][1] = sclx;
			ans[ansin][2] = y[i-1];
			//ansin++;
			break; 
		}
	}
	if(ans[ansin][0] == -1){
		ans[ansin][0] = n;
		ans[ansin][1] = sclx;
		ans[ansin][2] = y[n-1];
		//ansin++;
	}

	ansin++;
	for(ll i = n-2; i >= 0; i--){
		if(y[i] <= scly){
			ans[ansin][0] = n-i-1;
			ans[ansin][1] = sclx;
			ans[ansin][2] = y[i+1];
			//ansin++;
			break;
		}
	}
	if(ans[ansin][0] == -1){
		ans[ansin][0] = n;
		ans[ansin][1] = sclx;
		ans[ansin][2] = y[0];
		//ansin++;
	}

	ll finin = -1, maxi = -1;
	For(i, 0, 4){
		if(ans[i][1] == sclx && ans[i][2] == scly) continue;
		if(ans[i][0] > maxi){
			maxi = ans[i][0];
			finin = i;
		}
		//printf("->%lld %lld %lld\n", ans[i][0], ans[i][1], ans[i][2] );
	}

	//if(n == 1) 
	printf("1\n%lld %lld\n", x[0], y[0]);
	else
	printf("%lld\n%lld %lld\n", ans[finin][0], ans[finin][1], ans[finin][2] );
}//}
///Test(Given, Scratch, Corner data, Code Counter)