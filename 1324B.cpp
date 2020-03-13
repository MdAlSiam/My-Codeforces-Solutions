#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x);
#define prll(x, y) printf("%lld %lld\n", x, y);

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

typedef struct element{ll xx; ll pos;} element;

bool compare(element aa, element bb){return aa.xx < bb.xx;}

int main(){scl(test); while(test--){
    scl(n);
    element el[n+2];
    For(i, 0, n){
        scl(el[i].xx);
        el[i].pos = i;
    }
    sort(el, el+n, compare);
    bool yes = false;
    For(i, 1, n){
        if((el[i].xx == el[i-1].xx) && abs(el[i].pos - el[i-1].pos) > 1) yes = true;
        if((i >= 2) && (el[i].xx == el[i-2].xx) && abs(el[i].pos - el[i-2].pos) > 1) yes = true;
    }
    if(yes) printf("YES\n");
    else printf("NO\n");
}}

