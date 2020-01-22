#include <bits/stdc++.h>
using namespace std;

int n, k;
int* ara[3];
int bash = 0;

void input_solve(){
    scanf("%d %d", &n, &k);
    ara[1] = new int[n+1];
    ara[2] = new int[n+1];
    for(int i = 1; i <= n; i++) ara[1][i] = 1;
    for(int i = 1; i <= n; i++) ara[2][i] = 1;

    while(k--){
        int r, c;
        scanf("%d %d", &r, &c);
        if(ara[r][c] == 0){
            ara[r][c] = 1;
            if(r == 1){
                if(ara[2][c+1] == 0 && c+1 <= n) bash--;
                if(ara[2][c] == 0) bash--;
                if(ara[2][c-1] == 0 && c-1 >= 1) bash--;
            }
            if(r == 2){
                if(ara[1][c+1] == 0 && c+1 <= n) bash--;
                if(ara[1][c] == 0) bash--;
                if(ara[1][c-1] == 0 && c-1 >= 1) bash--;
            }
        }
        else{
            ara[r][c] = 0;
            if(r == 1){
                if(ara[2][c+1] == 0 && c+1 <= n) bash++;
                if(ara[2][c] == 0) bash++;
                if(ara[2][c-1] == 0 && c-1 >= 1) bash++;
            }
            if(r == 2){
                if(ara[1][c+1] == 0 && c+1 <= n) bash++;
                if(ara[1][c] == 0) bash++;
                if(ara[1][c-1] == 0 && c-1 >= 1) bash++;
            }
        }
        if(!bash) printf("yEs\n");
        else printf("nO\n");
    }
}

int main(){
    input_solve();
}
