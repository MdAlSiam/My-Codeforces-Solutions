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
    scl(n);
    ll nn = n/2;

    if(nn & 1){
        printf("NO\n");
        continue;
    }

    ll jor[n+10], bejor[n+10];

    ll now = 0;

    for(ll i = 1; i <= nn; i++){
        now += 2;
        jor[i] = now;
    }
    now = -1;
    for(ll i = 1; i <= nn; i++){
        now += 2;
        bejor[i] = now;
        if(i == nn){
            bejor[i] = jor[i] + (i-1);
        }
    }

    printf("YES\n");

    for(ll i = 1; i <= nn; i++){
        cout << jor[i] << " ";
    }
    for(ll i = 1; i <= nn; i++){
        cout << bejor[i] << " ";
    }
    cout << endl;
}}
///Test(Given, Scratch, Corner data, Code Counter)

