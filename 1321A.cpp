#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int r1k = 0, r2k = 0, common = 0, r1sc = 0, r2sc = 0;

    int ara[n], bra[n];

    for(int i = 0; i < n; i++)
        scanf("%d", ara+i);
    for(int i = 0; i < n; i++)
        scanf("%d", bra+i);

    for(int i = 0; i < n; i++){
        if(ara[i] == 1 && bra[i] == 1) common++;
        else if(ara[i] == 1) r1k++;
        else if(bra[i] == 1)r2k++;
    }

    //printf("Test %d %d\n", r1k, r2k);

    if(r1k == 0){
        printf("-1\n");
        return 0;
    }

    r1sc += common;
    r2sc += common + r2k;

    int need = r2sc+1-common;

    int ans = need / r1k;
    if(ans*r1k != need) ans++;

    printf("%d\n", ans);

}
