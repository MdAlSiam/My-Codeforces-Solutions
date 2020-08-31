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
ll x, y, z = -1, maxi, mini;

/*_________________________________________________________________________________________*/

void solve(){
    scl(n);
    ll ara[n+1];
    ll sign[n+1];
    ll plussum = 0, minussum = 0;
    For(i, 0, n){
        dd tt;
        scd(tt);
        ara[i] = (ll)(tt);

        if(abs(tt - ara[i]*1.00) <= eps) sign[i] = 0;
        else if(ara[i] == 0 and tt <= -eps) sign[i] = -1;
        else if(ara[i] == 0 and tt >= eps) sign[i] = 1;
        else if(ara[i] > 0) sign[i] = 1;
        else sign[i] = -1;

        if(ara[i] < 0){
            minussum += -ara[i];
        }
        else{
            plussum += ara[i];
        }
    }

    ll diff = abs(plussum - minussum);

    if(plussum < minussum){
        For(i, 0, n){
            if(sign[i] == 1 and diff){
                prl(ara[i]+1);
                diff--;
            }
            else prl(ara[i]);
        }
    }
    else{
        For(i, 0, n){
            if(sign[i] == -1 and diff){
                prl(ara[i] - 1);
                diff--;
            }
            else{
                prl(ara[i]);
            }
        }
    }
}

int main(){
    test = 1;
    //while(scl(test) == 1)
    while(test--) solve();
}

/*******************************************************************************************/
