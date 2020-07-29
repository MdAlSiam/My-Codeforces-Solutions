using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

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

#define maxn 100005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k, kount, totalpermit, leftpermit;
ll a, b, c, ans;
ll x, y, z = -1;
ll ara[maxn], cs[maxn], sumwithprev[maxn], maxsumwithprev[maxn];
ll max_so_far;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    scll(totalpermit, leftpermit);

    For(i, 0, n) scl(ara[i]);

    cs[0] = ara[0];
    For(i, 1, n) cs[i] = cs[i-1] + ara[i];

    sumwithprev[0] = 0;
    For(i, 1, n) sumwithprev[i] = ara[i] + ara[i-1];
    maxsumwithprev[0] = max_so_far = 0;
    For(i, 1, n){
        maxsumwithprev[i] = max(max_so_far, sumwithprev[i]);
        max_so_far = max(max_so_far, sumwithprev[i]);
    }

    ans = -1;
    temp = 0;
    //no back
    //temp = cs[min(n-1, totalpermit)];
    if(totalpermit <= n-1) temp = cs[totalpermit];
    ans = max(ans, temp);
    //oneback
    if(leftpermit >= 1){
        temp = 0;
        temp += cs[totalpermit-1];
        temp += ara[totalpermit-2];
        ans = max(ans, temp);
    }
    //cycle
    For(backnow, 1, leftpermit+1){
        ll extramov = backnow*2;
        ll mainmov = totalpermit - extramov;
        temp = 0;
        if(mainmov >= 1){
            temp += cs[mainmov];
            temp += maxsumwithprev[mainmov]*backnow;
            ans = max(ans, temp);
        }

        temp = 0;
        extramov = (backnow - 1)*2;
        mainmov = totalpermit - extramov;
        mainmov -= 1;
        if(mainmov >= 1){
            temp += cs[mainmov];
            temp += ara[mainmov-1];
            temp += maxsumwithprev[mainmov]*(backnow-1);
            ans = max(ans, temp);
        }
    }

    prl(ans);
}
}}

/*******************************************************************************************/

