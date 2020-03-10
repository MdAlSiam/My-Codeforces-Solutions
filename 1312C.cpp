#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int test;
    scanf("%lld", &test);

    while(test--){

        long long int n, k;
        scanf("%lld %lld", &n, &k);
        long long int ara[n];
        for(long long int i = 0; i < n; i++)
            scanf("%lld", ara+i);

        long long int tosubtract = 1;
        while(tosubtract <= 10000000000000000) tosubtract *= k;

        for(; tosubtract >= 1; tosubtract /= k){
            sort(ara, ara+n);
            for(long long int i = 0; i < n; i++){
                if(ara[i] >= tosubtract){
                    ara[i] -= tosubtract;
                    break;
                }
            }
        }

        bool hobe = true;
        for(long long int i = 0; i < n; i++){
            if(ara[i] > 0) hobe = false;
        }

        if(hobe) printf("Yes\n");
        else printf("No\n");

    } //End of test
}
