#include <bits/stdc++.h>
using namespace std;

int64_t test;
int64_t n;
char str[100005];
int64_t ara[100005];
map<int64_t, int64_t> mp;
int64_t ans;

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        scanf(" %s", &str);
        for(int64_t i = 0; i < n; i++) ara[i] = str[i] - '0';
        for(int64_t i = 0; i < n; i++){
            ara[i]--;
            if(i > 0) ara[i] += ara[i-1];
        }
        ans = 0;
        mp.clear();
        mp[0] = 1;
        for(int64_t i = 0; i < n; i++){
            if(mp.count(ara[i])) ans += mp[ara[i]];
            mp[ara[i]]++;
        }
        cout << ans << endl;
    }
}
