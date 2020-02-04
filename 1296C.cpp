#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define print(num) printf("%lld\n", num)

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

map<pll, ll> lastseen;

int main(){scl(test); while(test--){

    lastseen.clear();

    ll len;
    scl(len);
    string str;
    cin >> str;

    ll anslen, ansx, ansy;
    anslen = inf;
    ansx = ansy = -1;

    x = y = 0;
    lastseen[{0,0}] = -1;

    For(i, 0, len){

        if(str[i] == 'L') x--;
        if(str[i] == 'R') x++;
        if(str[i] == 'U') y++;
        if(str[i] == 'D') y--;

        if(lastseen.count({x,y})){
            t = lastseen[{x,y}] + 1;
            temp = i;
            if(temp - t < anslen){
                anslen = temp - t;
                ansx = t;
                ansy = temp;
            }
        }

        lastseen[{x,y}] = i;

    }

    if(ansx == -1) print(ansx);
    else printf("%lld %lld\n", ++ansx, ++ansy);

}}
