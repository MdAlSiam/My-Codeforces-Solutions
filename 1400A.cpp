 /* In the name of Allah SWT */

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define ON(n,i) (n|(1LL<<i))
#define OFF(n,i) (n&(~(1LL<<i)))
#define CHK(n,i) (n&(1LL<<i))

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

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    string in;
    cin >> in;
    string ans1 = "", ans2 = "", ans3 = "", ans4 = "";
    For(i, 0, n){
        ans3 += "0";
        ans4 += "1";
        if(i%2 == 0) {ans1 += "1"; ans2 += "0";}
        else {ans1 += "0"; ans2 += "1";}
    }

    //cout << ans1 << " " << ans2 << endl;

    bool hobena = false;
    For(i, 0, n){
        ll mi = i, si = 0;
        bool ok = false;
        for(; si < n; si++, mi++){
            if(in[mi] == ans1[si]) ok = true;
        }
        if(!ok) hobena = true;
    }
    if(!hobena){
        cout << ans1 << endl; continue;
    }


    hobena = false;
    For(i, 0, n){
        ll mi = i, si = 0;
        bool ok = false;
        for(; si < n; si++, mi++){
            if(in[mi] == ans2[si]) ok = true;
        }
        if(!ok) hobena = true;
    }
    if(!hobena){
        cout << ans2 << endl; continue;
    }

    hobena = false;
    For(i, 0, n){
        ll mi = i, si = 0;
        bool ok = false;
        for(; si < n; si++, mi++){
            if(in[mi] == ans3[si]) ok = true;
        }
        if(!ok) hobena = true;
    }
    if(!hobena){
        cout << ans3 << endl; continue;
    }

    hobena = false;
    For(i, 0, n){
        ll mi = i, si = 0;
        bool ok = false;
        for(; si < n; si++, mi++){
            if(in[mi] == ans4[si]) ok = true;
        }
        if(!ok) hobena = true;
    }
    if(!hobena){
        cout << ans4 << endl; continue;
    }
}
}}

/*******************************************************************************************/
