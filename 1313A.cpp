#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int ans = 0;
        if(a > 0) a--, ans++;
        if(b > 0) b--, ans++;
        if(c > 0) c--, ans++;
        int ara[3];
        ara[0] = a; ara[1] = b; ara[2] = c;
        sort(ara, ara+3);
        a = ara[2]; b = ara[1]; c = ara[0];
        if(a > 0 && b > 0) a--, b--, ans++;
        if(a > 0 && c > 0) a--, c--, ans++;
        if(b > 0 && c > 0) b--, c--, ans++;
        if(a > 0 && b > 0 && c > 0) a--, b--, c--, ans++;
        printf("%d\n", ans);
    }
}
