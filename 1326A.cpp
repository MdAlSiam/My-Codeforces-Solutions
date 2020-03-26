#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        int n;
        scanf("%d", &n);

        if(n == 1){printf("-1\n"); continue;}

        if(( (n-1)*2 + 3  ) % 3 == 0) printf("3");
        else printf("2");

        for(int i = 2; i <= n-1; i++) printf("2");
        printf("3\n");
    }
}
