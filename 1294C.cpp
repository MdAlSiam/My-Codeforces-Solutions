#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5
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
    scl(n);
    ll first[100000], second[100000], index = 1;
    bool found = false;
    for(ll i = 2; i*i <= n; i++){
        if(n % i == 0){
            first[index] = i;
            second[index] = n / i;
            index++;
        }
    }

    for(ll i = 1; i < index; i++){
        for(ll j = i+1; j < index; j++){
            if(first[i] != first[j]
               && n % (first[i]*first[j]) == 0
               && n / (first[i]*first[j]) != first[i]
               && n / (first[i]*first[j]) != first[j]){
                    found = true;
                    printf("YES\n");
                    printf("%lld %lld %lld\n", first[i], first[j], n / (first[i]*first[j]));
                    break;
               }
        }
        if(found) break;
    }
    if(!found) printf("NO\n");
}}
 
