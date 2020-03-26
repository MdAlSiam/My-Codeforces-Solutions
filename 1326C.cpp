#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 998244353

int main(){

    ll n, k;
    scanf("%lld %lld", &n, &k);

    ll ara[n+1];
    for(ll i = 0; i < n; i++)
        scanf("%lld", ara+i);

    ll maxi = n, mini = n-k+1;
    ll pos[k+2];
    ll index = 0;

    for(ll i = 0; i < n; i++){
        if(mini <= ara[i] && ara[i] <= maxi)
            pos[index++] = i+1;
    }

    ll ans = 1;
    for(ll i = 1; i < index; i++){
        ans *= (pos[i] - pos[i-1]);
        ans %= mod;
    }

    printf("%lld %lld\n", (maxi*(maxi+1))/2 - (mini*(mini-1))/2 , ans );
}
