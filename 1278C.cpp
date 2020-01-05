#include <bits/stdc++.h>
using namespace std;

#define ll long long int

map<ll, ll> amarmap;

int main(){
    ll test;
    scanf("%lld", &test);
    while(test--){
        ll n;
        scanf("%lld", &n);
        ll ara[n+n+6], ones[n+n+6], twos[n+n+6];
        for(ll i = 1; i <= n+n; i++)
            scanf("%lld", ara+i);
        ones[0] = twos[0] = ones[n+n+1] = twos[n+n+1] = 0;
        for(ll i = 1; i <= n; i++){
            if(ara[i] == 1){
                ones[i] = ones[i-1]+1;
                twos[i] = twos[i-1];
            }
            else{
                twos[i] = twos[i-1]+1;
                ones[i] = ones[i-1];
            }
        }
        for(ll i = n+n; i >= n+1; i--){
            if(ara[i] == 1){
                ones[i] = ones[i+1]+1;
                twos[i] = twos[i+1];
            }
            else{
                twos[i] = twos[i+1]+1;
                ones[i] = ones[i+1];
            }
        }

        amarmap.clear();
        for(ll i = n+n+1; i >= n+1; i--){
            amarmap[twos[i]-ones[i]] = i;
        }
        ll ans = LONG_LONG_MAX;
        for(ll i = 0; i <= n; i++){
            if(amarmap[ ones[i]-twos[i] ] != 0){
                ll anshere = amarmap[ ones[i]-twos[i] ] - 1 - i;
                ans = min(anshere, ans);
            }
        }
        printf("%lld\n", ans);
    }//end of test
}
