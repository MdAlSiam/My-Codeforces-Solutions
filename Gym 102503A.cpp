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
ll b, c;
ll x, y, z;

int main(){//scl(test); while(test--){
    ll a[10];
    for(ll i = 0; i < 4; i++)
        cin >> a[i];
    sort(a, a+4);

    cin >> x;

    //cout << "Test " << a[3]+a[2]+a[1] << " " << x << endl;

    if(a[3]+a[2]+a[1] >= x)
        cout <<"WAW"<< endl;
    else cout <<"AWW"<< endl;
}//}

