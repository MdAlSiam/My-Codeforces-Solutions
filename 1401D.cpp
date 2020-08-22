/* In the name of Allah SWT */

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
ll n, m, k, kount;
ll a, b, c, ans;
ll x, y, z = -1;

vector<ll> adj_list[maxn];
vector<ll> number_of_paths;
vector<ll> weights;

/*_________________________________________________________________________________________*/

ll dfs(ll dad, ll son){
    ll subtree_size = 1;

    for(int son_of_son : adj_list[son]){
        if(son_of_son == dad) continue;
        subtree_size += dfs(son, son_of_son);
    }

    if(son != 1) number_of_paths.pb(subtree_size*(n-subtree_size));

    return subtree_size;

}

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);

    For(i, 0, n+1) adj_list[i].clear();
    number_of_paths.clear();
    weights.clear();

    For(i, 1, n){
        scll(x, y);
        adj_list[x].pb(y);
        adj_list[y].pb(x);
    }

    scl(m);
    For(i, 0, m){
        scl(t);
        weights.pb(t);
    }

    ll _ = dfs(0, 1);

    sort(weights.begin(), weights.end());
    reverse(weights.begin(), weights.end());
    sort(number_of_paths.begin(), number_of_paths.end());
    reverse(number_of_paths.begin(), number_of_paths.end());

    ans = 0;

    if(weights.size() <= number_of_paths.size()){

        for(ll i = 0; i < number_of_paths.size(); i++){
            if(i < weights.size()){
                ans = ((ans%mod) + (number_of_paths[i]*weights[i]%mod)) % mod;
            }
            else{
                ans = ((ans%mod) + (number_of_paths[i]%mod)) % mod;
            }
        }

    }
    else{

        ll extra = weights.size() - number_of_paths.size();
        temp = 1;
        for(ll i = 0; i <= extra; i++) temp = ((temp%mod)*(weights[i]%mod))%mod;
        ans = ( ans%mod + (number_of_paths[0]*temp)%mod ) % mod;
        for(ll i = 1, j = extra+1; i < number_of_paths.size(); i++, j++){
           ans = ( ans%mod + (number_of_paths[i]*weights[extra+i])%mod ) % mod;
        }
    }

    prl(ans);
}
}}

/*******************************************************************************************/

