#include <bits/stdc++.h>
using namespace std;

int64_t rkount, gkount, bkount;
int64_t red[201], green[201], blue[201];
int64_t dp[201][201][201];

int64_t explore(int64_t rp, int64_t gp, int64_t bp){
    if(rp >= rkount and gp >= gkount and bp >= bkount) return 0;
    if(dp[rp][gp][bp] != -1) return dp[rp][gp][bp];

    int64_t ret1 = 0,
            ret2 = 0,
            ret3 = 0;

    if(rp < rkount and gp < gkount) ret1 = red[rp]*green[gp] + explore(rp+1, gp+1, bp);
    if(gp < gkount and bp < bkount) ret2 = green[gp]*blue[bp] + explore(rp, gp+1, bp+1);
    if(rp < rkount and bp < bkount) ret3 = red[rp]*blue[bp] + explore(rp+1, gp, bp+1);

    return dp[rp][gp][bp] = max({ret1, ret2, ret3});
}

int main(){
    cin >> rkount >> gkount >> bkount;
    for(int64_t i = 0; i < rkount; i++) cin >> red[i];
    for(int64_t i = 0; i < gkount; i++) cin >> green[i];
    for(int64_t i = 0; i < bkount; i++) cin >> blue[i];

    sort(red, red+rkount, greater<int64_t>());
    sort(green, green+gkount, greater<int64_t>());
    sort(blue, blue+bkount, greater<int64_t>());

    memset(dp, -1, sizeof(dp));
    cout << explore(0, 0, 0) << endl;
}
