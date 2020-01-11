#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll test;
    scanf("%lld", &test);

    while(test--){
        ll n;
        scanf("%lld", &n);
        ll ara[n+6];
        for(ll i = 0; i < n; i++)
            scanf("%lld", ara+i);
        ll fcs[n+6], bcs[n+6];
        fcs[0] = ara[0];
        for(ll i = 1; i < n; i++){
            fcs[i] = fcs[i-1]+ara[i];
        }
        bcs[n-1] = ara[n-1];
        for(ll i = n-2; i >= 0; i--){
            bcs[i] = bcs[i+1]+ara[i];
        }
        bool no = false;
        for(ll i = 0; i < n-1; i++){
            if(fcs[i] <= 0) no = true;
        }
        for(ll i = n-1; i > 0; i--){
            if(bcs[i] <= 0) no = true;
        }
        if(no) printf("NO\n");
        else printf("YES\n");
    }
}
