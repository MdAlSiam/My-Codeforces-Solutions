#include <bits/stdc++.h>
using namespace std;

int64_t n, d, m;
int64_t ara[100005], cs[100005];
int64_t totalex;

int main(){
    cin >> n >> d >> m;
    totalex = 0;
    for(int64_t i = 0; i < n; i++){
        cin >> ara[i];
        if(ara[i] > m) totalex++;
    }

    sort(ara, ara+n, greater<int64_t>());
    cs[0] = ara[0];
    for(int64_t i = 1; i < n; i++) cs[i] = cs[i-1] + ara[i];

    int64_t normalstart;
    for(int i = 0; i < n; i++){
        if(ara[i] <= m){
            normalstart = i;
            break;
        }
    }

    if(totalex == 0){
        cout << cs[n-1] << endl;
        return 0;
    }

    cout << normalstart << " " << totalex << endl;

    int64_t ans = 0;

    for(int64_t ex = 1; ex <= totalex; ex++){
        int64_t wasted = 1 + (ex-1)*(d+1);
        int64_t remaining = n - wasted;
        if(remaining >= 0){
            int64_t anshere = cs[ex-1] + (cs[min(totalex+remaining-1, n-1)] - cs[totalex-1]);
            ans = max(ans, anshere);
        }
    }

    cout << ans << endl;
}
