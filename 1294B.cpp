#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ull unsigned long long int
#define dd double
 
#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)
 
#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second
 
#define maxn 200005 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9
 
#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7
 
ll t, test, temp;
ll n, m, k;
ll a, b, c;
 
typedef struct {
    ll x;
    ll y;
} point;
 
bool compare(point aa, point bb){
    if(aa.x == bb.x) return aa.y < bb.y;
    return aa.x < bb.x;
}
 
int main(){scl(test); while(test--){
    scl(n);
    point p[n+4];
    p[0].x = p[0].y = 0;
    for(ll i = 1; i <= n; i++){
        scanf("%lld %lld", &p[i].x, &p[i].y);
    }
    sort(p, p+n+1, compare);
    bool hobena = false;
    for(ll i = 1; i <= n; i++){
        if(p[i-1].x <= p[i].x){}
        else{hobena = true; break;}
        if(p[i-1].y <= p[i].y){}
        else {hobena = true; break;}
    }
    if(hobena){
        printf("NO\n");
        continue;
    }
    printf("YES\n");
    for(ll i = 1; i <= n; i++){
        ll rk = p[i].x - p[i-1].x;
        for(ll j = 0; j < rk; j++) printf("R");
        ll uk = p[i].y - p[i-1].y;
        for(ll j = 0; j < uk; j++) printf("U");
    }
    printf("\n");
}}
