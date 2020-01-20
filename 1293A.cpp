#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        int n, s, k;
        scanf("%d %d %d", &n, &s, &k);

        int ara[k+5];
        int spos;
        bool open = true;
        for(int i = 0; i < k; i++){
            scanf("%d", &ara[i]);
            if(ara[i] == s) open = false;
        }

        if(open){
            printf("0\n");
            continue;
        }

        if(k == 1){
            printf("1\n");
            continue;
        }

        sort(ara, ara+k);

        for(int i = 0; i < k; i++){
            if(ara[i] == s) {spos = i; break;}
        }

        int ans = INT_MAX;
        for(int i = spos-1; i >= 0; i--){
            if(ara[i+1]-ara[i] == 1) continue;
            ans = min (ans,   ara[spos] - ara[i+1] + 1   );
        }
        if(ara[0] != 1) ans = min(ans, ara[spos] - (ara[0] - 1));
        for(int i = spos+1; i < k; i++){
            if(ara[i]-ara[i-1] == 1) continue;
            ans = min(ans, ara[i-1]+1-ara[spos] );
        }
        if(ara[k-1] != n) ans = min(ans, ara[k-1]+1-ara[spos]);

        printf("%d\n", ans);
    }
}
