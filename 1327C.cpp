#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, t;
    scanf("%d %d %d", &n, &m, &k);
    printf("%d\n", n-1+m-1+m*n-1);
    for(int i = 0; i < k; i++) scanf("%d %d", &t, &t);
    for(int i = 0; i < k; i++) scanf("%d %d", &t, &t);
    for(int i = 1; i <= n-1; i++) printf("D");
    for(int i = 1; i <= m-1; i++) printf("L");
    for(int i = 1; i <= m; i++){
        if(i & 1)for(int j = 1; j <= n-1; j++) printf("U");
        else for(int j = 1; j <= n-1; j++) printf("D");
        if(i != m) printf("R");
        else printf("\n");
    }
}
