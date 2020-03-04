#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n, m;
    scanf("%lld %lld", &n, &m);

    int a[n+8];
    for(ll i = 0; i < n; i++)
        scanf("%lld", a+i);

    if(n > m){
        printf("0\n");
        return 0;
    }

    ll ans = 1;

    for(ll i = 0; i < n; i++){
        for(ll j = i+1; j < n; j++){
            ans *= abs(a[i]-a[j]);
            ans %= m;
        }
    }

    printf("%lld\n", ans);
}
