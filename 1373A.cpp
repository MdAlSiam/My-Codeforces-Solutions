using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 1000000000 ///2x10^5 // n*log n in 1 sec
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
ll x, y, z;

ll fprice, sprice, sunit;
ll ans1, ans2;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    cin >> fprice >> sunit >> sprice;

    ans1 = ans2 = -1;

//    for(int i = 1; i <= maxn; i++){
//
//        ll p1 = fprice*i;
//        ll unit = i / sunit;
//        if(unit*sunit != i) unit++;
//        ll p2 = sprice*unit;
//
//        if(p1 < p2){
//            ans1 = i;
//            break;
//        }
//
//    }
//
//    for(int i = 1; i*sunit <= maxn; i++ ){
//        ll p1 = i*sunit*fprice;
//        ll p2 = i*sprice;
//
//        if(p2 < p1){
//            ans2 = i*sunit;
//            break;
//        }
//    }

    if(fprice < sprice) ans1 = 1;

    if(sprice < fprice*sunit) ans2 = sunit;

    cout << ans1 << " " << ans2 << endl;
}
}}

/*******************************************************************************************/

