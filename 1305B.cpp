#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

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

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

int main(){//scl(test); while(test--){

    string x;
    cin >> x;
    ll len = x.length();

    ll fwd[len+7], bwd[len+7];

    ll in1, in2;

    in1 = in2 = 0;

    for(ll i = 0; i < len; i++){
        if(x[i] == '(') fwd[in1++] = i+1;
        else bwd[in2++] = i+1;
    }

    ll p1 = 0, p2 = in2-1;

    while(1){
        if(p1 >= in1) break;
        if(p2 < 0) break;
        if(fwd[p1] < bwd[p2]){p1++; p2--;}
        else break;
        
    }

    if(p1 == 0 || p2 == in2-1) printf("0\n");
    else{
        printf("1\n");
        printf("%d\n", p1*2);
        for(ll i = 0; i < p1; i++) printf("%d ", fwd[i]);
        for(ll i = p2+1; i < in2; i++) printf("%d ", bwd[i]);
        printf("\n");
    }
}//}
 
