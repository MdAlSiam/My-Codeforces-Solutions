#include <bits/stdc++.h>
using namespace std;

vector<int> coins;
int n;
int dp[4010][4020];

bool solve(int index, int total){
    if(index == coins.size()) return total == n;
    if(total == n) return true;
    if(dp[index][total] != -1) return dp[index][total];

    bool ret1 = false, ret2 = false;
    ret1 = ret1 or solve(index+1, total+ coins[index]);
    ret2 = ret2 or solve(index+1, total);

    return dp[index][total] = ret1 or ret2;
}

int main(){
    int test;
    cin >> test;

    while(test--){
        cin >> n;
        int ara[n+n+1];
        int pos[n+n+2];
        for(int i = 1;i <= 2*n; i++){
            cin >> ara[i];
            pos[ara[i]] = i;
        }

        coins.clear();
        int check = n+n;
        for(int i = n+n; i >= 1; i--){
            if(pos[i] <= check){
                coins.push_back(check - pos[i] + 1);
                check = pos[i] - 1;
            }
        }

        //memset(dp, -1, sizeof(dp));
        for(int i = 0; i < coins.size()+1; i++){
            for(int j = 0; j < n+n+2; j++){
                dp[i][j] = -1;
            }
        }

        if(solve(0, 0)) printf("YES\n");
        else printf("NO\n");
    }
}
