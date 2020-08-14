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

int t, test, temp;
int n, m, k, kount;
int a, b, c, ans;
int x, y, z = -1;

int ara[201], bra[201];
int dp[201][512];

/*_________________________________________________________________________________________*/

int explore(int index, int cumor){
    if(index >= n) return cumor;
    if(dp[index][cumor] != -1) return dp[index][cumor];

    int ret = INT_MAX;
    for(int i = 0; i < m; i++){
        ret = min(ret, explore(index+1,  cumor | (ara[index] & bra[i])  ));
    }

    return dp[index][cumor] = ret;
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d", ara+i);
    for(int i = 0; i < m; i++)
        scanf("%d", bra+i);

    memset(dp, -1, sizeof(dp));
    cout << explore(0, 0) << endl;
}


/*******************************************************************************************/

