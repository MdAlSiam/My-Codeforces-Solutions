#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        int ara[n+1];
        for(int i = 0; i < n; i++)
            cin >> ara[i];
        int ans = 0;
        for(int i = 0; i < n; i += 2)
            ans += ara[i];
        int profit = 0;
        int curr_profit = 0;
        for(int i = 0; i+1 < n; i += 2){
            curr_profit += (ara[i+1] - ara[i]);
            if(curr_profit < 0) { curr_profit = 0; continue;}
            profit = max(curr_profit, profit);
        }
        int profit2 = 0;
        int curr_profit2 = 0;
        for(int i = 2; i < n; i += 2){
            curr_profit2 += (ara[i-1] - ara[i]);
            if(curr_profit2 < 0) { curr_profit2 = 0; continue;}
            profit2 = max(curr_profit2, profit2);
        }
        cout << ans + max(profit, profit2) << endl;
    }
}
