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
ll len, blank, firstonepos;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    scll(len, k);
    cin >> str;

    ll onepos[len+10];
    ll index = 0;
    onepos[index++] = 0;
    bool allzero = true;
    For(i, 0, len){
        if(str[i] == '1') {onepos[index++] = i+1; allzero = false;}
    }
    onepos[index++] = len+1;

    if(len <= k){
        if(allzero){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }

        continue;
    }

    if(allzero){
        ans = len / (k+1);
        if( (k+1)*ans != len  ) ans++;
        prl(ans);

        continue;
    }

    ans = 0;

    For(i, 0, index-1){

        ll start = onepos[i];
        ll stop = onepos[i+1];

        //prll(start, stop);

        ll kount1 = 0, kount2 = 0;

        if(i == 0){
            for(ll j = stop; j > start; j -= (k+1)){
            if(j == stop) continue;
            kount2++;
            }
        }
        else if(i == index-2){
            for(ll j = start; j < stop; j += (k+1)){
            if(j == start) continue;
            kount1++;
            }
        }
        else{

        for(ll j = start; j < stop; j += (k+1)){
            if(j == start) continue;
            if(j+k+1 <= stop) kount1++;
        }
        for(ll j = stop; j > start; j -= (k+1)){
            if(j == stop) continue;
            if( (j - (k+1) ) >= start) kount2++;
        }

        }

        ans += max(kount1, kount2);
    }

    prl(ans);
}
}}

/*******************************************************************************************/

