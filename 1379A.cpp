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

string in;
string mine;
string slide = "abacaba";

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    ll len;

    cin >> len;

    cin >> in;

    bool ansfound = false;

    for(ll i = 0; i+6 <= len-1; i++){
        bool foundhere = true;
        k = 0;
        for(ll j = i; k < 7; j++, k++){
            if(in[j] != '?' and in[j] != slide[k]){
                foundhere = false;
                break;
            }
        }

        mine = in;

        if(foundhere){
            k = 0;
            for(ll j = i; k < 7; j++, k++){
                if(mine[j] == '?') mine[j] = slide[k];
            }
            for(ll ii = 0; ii < len; ii++){
                if(mine[ii] == '?') mine[ii] = 'z';
            }

            kount = 0;

            for(ll ii = 0; ii+6 <= len-1; ii++){
                bool adder = true;
                k = 0;
                for(ll j = ii; k < 7; j++, k++){
                    if(mine[j] != slide[k]){
                        adder = false;
                    }
                }
                if(adder) kount++;
            }

            if(kount == 1){
                ansfound = true;
                prys;
                cout << mine <<endl;

            }

            if(ansfound) break;

        }

        if(ansfound) break;

    }

    if(!ansfound) prno;

}
}}

/*******************************************************************************************/

