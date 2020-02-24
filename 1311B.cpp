#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define For(i, x, y) for(ll i = x; i < y; i++)

#define sortvec(v) sort(v.begin(), v.end())
#define sortara(a, x, y) sort(a+x, a+y)

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

int main(){scl(test); while(test--){

    scll(n, m);
    ll ara[n+10], pra[m+10];

    For(i, 1, n+1) scl(ara[i]);
    For(i, 1, m+1) scl(pra[i]);

    sort(pra+1, pra+m+1);

    pra[m+1] = pra[m]+69;

    ll start, stop;
    start = stop = -1;

    for(ll i = 1; i <= m+1; i++){

        if(start == -1) start = pra[i];

        if(i > 1 && pra[i] == pra[i-1]+1){}
        else if(i > 1){
            stop = pra[i-1]+1;
            if(stop > n) stop = n;
            sort(ara+start, ara+stop+1);
            start = pra[i];
        }
    }

    bool allsorted = true;

    for(ll i = 2; i <= n; i++){
        if(ara[i] >= ara[i-1]){}
        else{allsorted = false; break;}
    }

    if(allsorted) printf("YES\n");
    else printf("NO\n");
}}

