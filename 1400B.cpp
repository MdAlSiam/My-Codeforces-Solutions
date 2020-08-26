 /* In the name of Allah SWT */

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define ON(n,i) (n|(1LL<<i))
#define OFF(n,i) (n&(~(1LL<<i)))
#define CHK(n,i) (n&(1LL<<i))

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)
#define prys printf("YES\n")
#define prno printf("NO\n")

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

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans;
ll x, y, z = -1;

ll bag1, bag2, k1, k2, wt1, wt2;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scll(bag1, bag2);
    scll(k1, k2);
    scll(wt1, wt2);

    if(wt1 > wt2){
        swap(k1, k2);
        swap(wt1, wt2);
    }
    ans = -1;

    For(i, 0, k1+1){
        ll _bag1 = bag1, _bag2 = bag2, _k1 = k1, _k2 = k2, _wt1 = wt1, _wt2 = wt2;
        ll  _ans = 0;

        if(_wt1*i > _bag1) continue;

        _bag1 -= i*_wt1;
        _ans += i;
        _k1 -= i;

        ll ff_el_bag2 = min(_k1, _bag2/_wt1);
        _bag2 -= ff_el_bag2*wt1;
        _ans += ff_el_bag2;
        _k1 -= ff_el_bag2;

        ll ss_el_bag1 = min(_bag1/_wt2, _k2);
        _bag1 -= ss_el_bag1*wt2;
        _ans += ss_el_bag1;
        _k2 -= ss_el_bag1;

        ll ss_el_bag2 = min(_k2, _bag2/_wt2);
        _bag2 -= ss_el_bag2;
        _ans += ss_el_bag2;
        _k2 -= ss_el_bag2;

        ans = max(ans, _ans) ;
    }

    prl(ans);
}
}}

/*******************************************************************************************/

