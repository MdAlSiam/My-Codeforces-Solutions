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

vector<pll> v;
vector<ll>::iterator it;
ll cs[maxn];
vector<ll> cpy_ff;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    v.clear();
    cpy_ff.clear();

    cin >> n >> m;

    For(i, 0, m){
        cin >> t >> temp;
        v.pb({t, temp});
        cpy_ff.pb(t);
    }

    sort(v.begin(), v.end());
    sort(cpy_ff.begin(), cpy_ff.end());

    cs[m-1] = v[m-1].first;
    for(ll i = m-2; i >= 0; i--)
        cs[i] = v[i].first + cs[i+1];

    ans = 0;

    For(i, 0, m){
        it = lower_bound(cpy_ff.begin(), cpy_ff.end(), v[i].second);

        if(it == cpy_ff.end()){
            ans = max(ans, v[i].first + (n-1)*v[i].second);
            continue;
        }

        ll pos = it - cpy_ff.begin();
        ll available = v.size() - pos;

        ll ansnow = 0;
        ll totake = min(n, available);
        ll till = v.size() - totake;

        if(till <= i){
            ansnow += cs[till];
            ll req = n - totake;
            if(req > 0) ansnow += req*v[i].second;
        }
        else{
            ansnow += cs[till];
            ll req = n - totake;
            if(req > 0) ansnow += v[i].first + (req-1)*v[i].second;
        }

        ans = max(ans, ansnow);
    }

    cout << ans << endl;
}
}}

/*******************************************************************************************/

