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
ll c, ans = 0;
ll x, y, z = -1;

vector<ll> a, b;
vector<ll> slice_removable;

/*_________________________________________________________________________________________*/

int main(){
while(scll(n, m) == 2){
    a.clear();
    b.clear();
    slice_removable.clear();
    ans = 0;

    scll(x, c);
    scl(y);

    a.pb(0LL);
    for(ll i = 1; i <= n; i++){
        scl(t);
        a.pb(t);
    }
    a.pb(0LL);

    b.pb(0LL);
    for(ll i = 1; i <= m; i++){
        scl(t);
        b.pb(t);
    }
    b.pb(0LL);

    ll j = 1;
    for(ll i = 1; i < a.size(); i++){
            if(a[i] != b[j]){
                slice_removable.pb(a[i]);
                continue;
            }

            if(slice_removable.size() == 0){
                j++;
                continue;
            }

            sort(slice_removable.begin(), slice_removable.end());

            if(slice_removable[slice_removable.size() - 1] > b[j]
               and slice_removable[slice_removable.size() - 1] > b[j-1]
               and slice_removable.size() < c){
                prl(z);
                return 0;
            }

            if(y*c < x){
                if(slice_removable[slice_removable.size()-1] > b[j]
                   and slice_removable[slice_removable.size()-1] > b[j-1])
                    ans += y*(slice_removable.size() - c) + x;
                else ans += y*(slice_removable.size());
            }
            else{
                ans += (slice_removable.size() % c)*y + (slice_removable.size() / c)*x;
            }

            j++;
            slice_removable.clear();

    }

    if(j != b.size()){
        prl(z);
        return 0;
    }

    prl(ans);
}}

/*******************************************************************************************/

