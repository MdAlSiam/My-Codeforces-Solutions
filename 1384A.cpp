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
ll n, m, k, kount;
ll a, b, c, ans;
ll x, y, z = -1;

ll ara[111];

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    ll maxi = 0;
    For(i, 1, n+1) {scl(ara[i]); maxi = max(maxi, ara[i]);}

    char grid[n+4][maxi+4];
    Mem(grid, 'a');

    for(ll i = 1; i <= n; i++){
        for(ll j = 0; j <= ara[i]; j++){
            if(j == ara[i]){
                if(grid[i-1][j] == 'z') grid[i][j] = 'x';
                else grid[i][j] = 'z';
                continue;
            }
            grid[i][j] = grid[i-1][j];
        }
    }

    For(i, 0, n+1){
        For(j, 0, maxi+4){
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }
}
}}

/*******************************************************************************************/

