#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        int n;
        scanf("%d", &n);
        int ara[n+1], ansara[n+n+1], taken[n+n+1], index = 0;
        for(int i = 1; i <= n+n; i++) taken[i] = 0;
        for(int i = 1; i <= n; i++) scanf("%d", ara+i);
        for(int i = 1; i <= n; i++) taken[ara[i]] = 1;
        bool minusone = false;
        for(int i = 1; i <= n; i++){
            ansara[index++] = ara[i];
            bool pairfound = false;
            for(int j = ara[i]+1; j <= n+n; j++){
                if(taken[j] == 0){
                    ansara[index++] = j;
                    taken[j] = 1;
                    pairfound = true;
                    break;
                }
            }
            if(!pairfound){
                minusone = true;
                break;
            }
        }
        if(minusone) {printf("-1\n"); continue;}
        for(int i = 0; i < index; i++)
            printf(i == index-1 ? "%d\n" : "%d ", ansara[i]);
    }
}
