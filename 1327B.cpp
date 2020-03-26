#include <bits/stdc++.h>
using namespace std;

int main(){

    int test;
    scanf("%d", &test);
    while(test--){

    int n;
    scanf("%d", &n);

    int male[n+2], female[n+2];
    memset(male, 0, sizeof(male));
    memset(female, 0, sizeof(female));

    for(int i = 1; i <= n; i++){
        int k;
        scanf("%d", &k);
        for(int j = 0; j < k; j++){
            int maleno;
            scanf("%d", &maleno);
            if(male[maleno] == 0 && female[i] == 0){
                male[maleno] = 1;
                female[i] = 1;
            }
        }
    }

    int fans = -1, mans = -1;
    for(int i = 1; i <= n; i++){
        if(male[i] == 0){
            mans = i;
            break;
        }
    }
    for(int i = 1; i <= n; i++){
        if(female[i] == 0){
            fans = i;
            break;
        }
    }

    if(fans == -1) printf("OPTIMAL\n");
    else printf("IMPROVE\n%d %d\n", fans, mans);

    }//test
}
