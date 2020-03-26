#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;

int main(){

    int test;
    scanf("%d", &test);

    while(test--){

        int n;
        scanf("%d", &n);

        int ara[n], ans1[n], ans2[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }

        bool allsame = true;

        ans1[0] = 0;
        for(int i = 1; i < n; i++){
            if(ara[i] != ara[i-1]){
                ans1[i] = (ans1[i-1]+1)%2;
                allsame = false;
            }
            else ans1[i] = ans1[i-1];
        }

        if(allsame){
            int tt = 1;
            printf("1\n");
            for(int i = 0; i < n; i++)
                printf(i == n-1 ? "%d\n" : "%d ", tt);
            continue;
        }

        bool stopped = false;

        if(ans1[n-1] != ans1[0] || ara[n-1] == ara[0]){
            printf("2\n");
            for(int i = 0; i < n; i++)
                printf(i == n-1 ? "%d\n" : "%d ", ans1[i]+1);
        }
        else{
            ans2[n-1] = (ans1[n-1]+1)%2;
            for(int i = n-2; i >= 0; i--){
                if(ans1[i+1] == ans1[i]) stopped = true;
                if(stopped) ans2[i] = ans1[i];
                else ans2[i] = (ans1[i]+1)%2;
            }
            if(!stopped) ans2[0] = 2;

            if(ans2[0] == 2) printf("3\n");
            else printf("2\n");

            for(int i = 0; i < n; i++)
                printf(i == n-1 ? "%d\n" : "%d ", ans2[i]+1);
        }
    }//end of test
}
