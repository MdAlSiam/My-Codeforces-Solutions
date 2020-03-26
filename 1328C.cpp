#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x);
#define prll(x, y) printf("%lld %lld\n", x, y);

#define For(i, x, y) for(ll i = x; i < y; i++)

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

///Focus fully
///Statement+Examples
///Analysis+Solution

ll t, test, temp;
ll n, m, k;
//ll a, b, c;
ll x, y, z;

int main(){scl(test); while(test--){
    scl(n);
    char x[n+5], a[n+5], b[n+5];
    scanf(" %s", x);

    if(x[0] == '2'){a[0] = '1'; b[0] = '1';}
    else if(x[0] == '1'){a[0] = '1'; b[0] = '0';}
    else if(x[0] == '0'){a[0] = '0'; b[0] = '0';}

    bool stopped = false;
    For(i, 1, n){
       if(a[i-1] > b[i-1]) stopped = true;
       if(stopped){
            a[i] = '0';
            b[i] = x[i];
       }
       else{
            if(x[i] == '2'){a[i] = '1'; b[i] = '1';}
            if(x[i] == '1'){a[i] = '1'; b[i] = '0';}
            if(x[i] == '0'){a[i] = '0'; b[i] = '0';}
       }
    }
    a[n] = b[n] = '\0';
    printf("%s\n%s\n", a, b);
}}

///Test(Given, Scratch, Corner data, Code Counter)
