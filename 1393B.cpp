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
ll n, m, k;
ll a, b, c, ans;
ll x, y, z = -1, q;

map<ll, ll> kount;
map<ll, ll>::iterator it;
ll four, two, six, eight;
/*_________________________________________________________________________________________*/

int main(){
    kount.clear();
    four = two = six = eight = 0;
    scl(n);
    For(i, 0, n){
        scl(t);
        kount[t]++;
    }

    for(it = kount.begin(); it != kount.end(); it++){
        ll vv = it->second;
        //cout << "---" << it->first << " " << it->second << endl;
        if(vv >= 2 and vv <= 3) two++;
        else if(vv >= 4 and vv <= 5) four++;
        else if(vv >= 6 and vv <= 7) six++;
        else if(vv >= 8) eight++;
    }

    scl(q);

    while(q--){
        char ch;
        scanf(" %c", &ch);

        if(ch == '+'){
            scl(t);
            ll vv = kount[t];
            if(vv >= 2 and vv <= 3) two--;
            else if(vv >= 4 and vv <= 5) four--;
            else if(vv >= 6 and vv <= 7) six--;
            else if(vv >= 8) eight--;
            kount[t]++;
            vv = kount[t];
            if(vv >= 2 and vv <= 3) two++;
            else if(vv >= 4 and vv <= 5) four++;
            else if(vv >= 6 and vv <= 7) six++;
            else if(vv >= 8) eight++;
        }

        if(ch == '-'){
            scl(t);
            ll vv = kount[t];
            if(vv >= 2 and vv <= 3) two--;
            else if(vv >= 4 and vv <= 5) four--;
            else if(vv >= 6 and vv <= 7) six--;
            else if(vv >= 8) eight--;
            kount[t]--;
            vv = kount[t];
            if(vv >= 2 and vv <= 3) two++;
            else if(vv >= 4 and vv <= 5) four++;
            else if(vv >= 6 and vv <= 7) six++;
            else if(vv >= 8) eight++;
        }

        //cout << kount[1] << " ~ "  << kount[2] << endl;

        if(eight >= 1) prys;

        else if(six >= 1 and (two >= 1 or four >= 1 or six >= 2 or eight >= 1)) prys;

        else if(four >= 1 and (two >= 2 or four >= 2 or six >= 1 or eight >= 1)) prys;

        else prno;
    }
}


/*******************************************************************************************/

