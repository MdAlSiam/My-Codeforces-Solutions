#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define print1(num) printf("%lld\n", num)
#define print2(num1, num2) printf("%lld %lld\n", num1, num2)

#define For(i, x, y) for(ll i = x; i < y; i++)

#define sortvec(v) sort(v.begin(), v.end())
#define sortara(a, x, y) sort(a+x, a+y)

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

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

int main(){scl(test); while(test--){

    ll len, kk;
    scll(len, kk);

    string str;
    cin >> str;

    ll kount[len+4];
    memset(kount, 0, sizeof(kount));

    ll pos[kk+5];
    for(ll i = 0; i < kk; i++) {scl(pos[i]); pos[i]--; kount[pos[i]]++;}


    ll letters[26][len];
    memset(letters, 0, sizeof(letters));

    for(ll i = 0; i < len; i++){

        if(i == 0){
            letters[str[i]-'a'][i]++;
            continue;
        }

        for(ll j = 0; j < 26; j++){
            letters[j][i] = letters[j][i-1];
        }

        letters[str[i]-'a'][i]++;

    }

    ll ans[26];
    memset(ans, 0, sizeof(ans));

    for(ll i = 0; i < len; i++){
        if(kount[i] == 0 && i != len-1) continue;

        if(i == len-1 && kount[i] == 0) kount[i] = 1;

        for(ll j = 0; j < 26; j++){
            ans[j] += letters[j][i] * kount[i];
        }

    }

    for(ll i = 0; i < 26; i++){
        if(i > 0) printf(" ");
        printf("%lld", ans[i]);
    }
    printf("\n");
}}

