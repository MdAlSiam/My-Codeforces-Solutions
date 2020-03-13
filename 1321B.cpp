#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    scanf("%lld", &n);
    long long int ara[n+1];
    for(long long int i = 1; i <= n; i++) scanf("%lld", ara+i);

    map<long long int, long long int> diffmap, ansmap;

    for(long long int i = 1; i <= n; i++){
        if(!diffmap.count(ara[i]-i)) {diffmap[ara[i]-i] = 1; ansmap[ara[i]-i] = ara[i];}
        else ansmap[ara[i]-i] += ara[i];
    }

    long long int ans = -1;
    for(long long int i = 1; i <= n; i++){
        ans = max(ans, ansmap[ara[i]-i]);
    }

    printf("%lld", ans);
}
