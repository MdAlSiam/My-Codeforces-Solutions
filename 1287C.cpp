//Tag(s): dp, greedy

#include <bits/stdc++.h>
using namespace std;

int n;
int ara[111];
int dp[111][111][111][2];

int call(int pos, int rem_even, int rem_odd, int prev_type){

    if(pos > n) return 0;
    if(dp[pos][rem_even][rem_odd][prev_type] != -1)
        return dp[pos][rem_even][rem_odd][prev_type];

    int ret, ret1, ret2;
    ret = ret1 = ret2 = 1111;

    if(ara[pos] != 0){
        int curr_type = ara[pos] % 2;
        ret = (pos>1 && prev_type != curr_type)+ call(pos+1, rem_even, rem_odd, curr_type);
    }
    else{
        if(rem_even > 0)
            ret1 = (pos>1 && prev_type == 1)+ call(pos+1, rem_even-1, rem_odd, 0);
        if(rem_odd > 0)
            ret2 = (pos>1 && prev_type == 0)+call(pos+1, rem_even, rem_odd-1, 1);
        ret = min(ret1, ret2);
    }

    return dp[pos][rem_even][rem_odd][prev_type] = ret;
}

int main(){
    scanf("%d", &n);
    int rem_odd, rem_even;
    rem_odd = n/2;
    if(rem_odd*2 != n) rem_odd++;
    rem_even = n/2;
    for(int i = 1; i <= n; i++){
        scanf("%d", &ara[i]);
        if(ara[i] == 0) continue;
        if(ara[i] & 1) rem_odd--;
        else rem_even--;
    }

    memset(dp, -1, sizeof(dp));
    int ans = call(1, rem_even, rem_odd, 0);
    printf("%d\n", ans);
}
