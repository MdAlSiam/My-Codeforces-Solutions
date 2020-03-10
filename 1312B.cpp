#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        int n;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++)
            scanf("%d", ara+i);
        sort(ara, ara+n);
        for(int i = n-1; i >= 0; i--)
            printf("%d ", ara[i]);
        printf("\n");
    }
}
