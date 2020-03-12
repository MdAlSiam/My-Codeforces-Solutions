#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    char bra[n+7];
    scanf(" %s", bra+1);

    int opening[n+7], closing[n+7];
    opening[0] = closing[0] = 0;

    for(int i = 1; i <= n; i++){
        if(bra[i] == '(') opening[i] = opening[i-1]+1, closing[i] = closing[i-1];
        else opening[i] = opening[i-1], closing[i] = closing[i-1]+1;
    }

    int ans = 0;
    for(int i = 1, start = 0; i <= n; i++){
        if(opening[i] == closing[i]){
            if(closing[i] == closing[i-1]) ans += (i-start);
            start = i;
        }
    }

    if(opening[n] != closing[n])  ans = -1;

    printf("%d", ans);
}
