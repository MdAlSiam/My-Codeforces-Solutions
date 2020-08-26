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

ll ara[5050];

/*_________________________________________________________________________________________*/

ll go(ll lo, ll hi){
    ll _mini = inf;
    For(i, lo, hi+1) _mini = min(_mini, ara[i]);
    For(i, lo, hi+1) ara[i] -= _mini;
    ll _ans = _mini;
    ll _lt = lo;
    For(i, lo, hi+2){
        if(i == hi+1){
            if(_lt < i) _ans += go(_lt, i-1);
            continue;
        }
        if(ara[i] == 0){
            if(_lt < i) _ans += go(_lt, i-1);
            _lt = i+1;
        }
    }

    return min(hi-lo+1, _ans);
}

void solve(){
    scl(n);
    For(i, 1, n+1) scl(ara[i]);

    ans = 0;
    ll lt = 1;
    For(i, 1, n+2){
        if(i == n+1){
            if(lt < i) ans += go(lt, i-1);
            continue;
        }
        if(ara[i] == 0){
            if(lt < i) ans += go(lt, i-1);
            lt = i+1;
        }
    }

    prl(ans);
}

int main(){
    test = 1;
    //while(scl(test) == 1)
    while(test--) solve();
}

/*******************************************************************************************/

