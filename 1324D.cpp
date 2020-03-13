#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ll n;
    scanf("%lld", &n);
    ll arr[n], brr[n];
    for(ll i = 0; i < n; i++)
        scanf("%lld", arr+i);
    for(ll i = 0; i < n; i++)
        scanf("%lld", brr+i);

    vector<ll> v;
    for(ll i = 0; i < n; i++)
        v.push_back(arr[i]-brr[i]);
    sort(v.begin(), v.end());

    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if(v[i] <= 0){
            ans += (v.end() - upper_bound(v.begin(), v.end(), -v[i]));
        }
        else{
            ans +=  n-i-1;
        }
    }

    printf("%lld\n", ans);
}
