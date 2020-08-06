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

#define maxn 200005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k;
ll a, b, c, ans;
ll x, y, z = -1;

ll kount[110];

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    Mem(kount, 0);
    scl(n);
    For(i, 0, n){
        scl(temp);
        kount[temp]++;
    }

    ans = -1;

    For(i, 1, 51){
        ans = max(ans, kount[i] / 2);
    }

    for(ll sum = 2; sum <= 100; sum++){

        ll mini = 1, maxi = sum - 1;
        temp = 0;
        while(mini <= maxi){
            if(mini == maxi) temp += (kount[mini] / 2);
            else temp += min(kount[mini], kount[maxi]);
            mini++;
            maxi--;
        }

        ans = max(ans, temp);
    }

    prl(ans);
}
}}

/*******************************************************************************************/

