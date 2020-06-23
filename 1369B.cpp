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
    //scl(str);
    cin >> str;

    ll start = -1, stop = -1;
    bool one = false, zero = false;

    for(ll i = 0; i < n; i++){
        if(str[i] == '1' && (i == 0 || str[i-1] == '0')){

            if(one && zero && i != 0){
                for(ll j = start; j <= stop; j++)
                    str[j] = '2';
            }
            start = i;
            stop = i;
            one = true;
            zero = false;
        }
        else if(str[i] == '0'){
            zero = true;
            stop = i;
        }
        else if(str[i] == '1'){
            one = true;
            stop = i;
        }
    }
    if(one && zero){
                for(ll j = start; j <= stop; j++)
                    str[j] = '2';
    }


    bool zero_debt = true;

    //cout << str << endl;

    for(int i = 0; i < n; i++){
        if(str[i] == '2'){
            if(zero_debt){
                cout << '0';
                zero_debt = false;
            }
        }
        else cout << str[i];
    }
    cout << endl;
}
}}

/*******************************************************************************************/

