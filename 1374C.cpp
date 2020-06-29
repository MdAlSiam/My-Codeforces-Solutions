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
ll x, y, z;

string str;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    cin >> str;
    ll op = 0, cl = 0;
    For(i, 0, n){
        if(str[i] == ')') op++;
        else break;
    }
    for(ll i = n-1; i >= 0; i--){
        if(str[i] == '(') cl++;
        else break;
    }
    //prl(max(op, cl));

    ll bounai = 0;
    kount = 0;
    For(i, 0, n){
        if(str[i] == '(') kount++;
        else if(kount > 0 && str[i] == ')') kount--;
    }

    ans = 0;
    //kount -= max(op, cl);
    ans += max(op, cl);

    //prl(ans + kount*2);
    prl(kount);
}
}}

/*******************************************************************************************/

