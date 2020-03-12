#include <bits/stdc++.h>
using namespace std;

int main(){

    int test;
    scanf("%d", &test);

    while(test--){

        int n;
        scanf("%d", &n);

        int evenin, oddin1, oddin2, prev = 2;
        evenin = -1; oddin1 = -1; oddin2 = -1;

        for(int i = 1; i <= n; i++){

            int t;
            scanf("%d", &t);

            if((i > 1) && (prev % 2 == 1) && (t % 2 == 1) && (oddin1 == -1)){
                oddin1 = i-1;
                oddin2 = i;
            }

            else if((t % 2 == 0) && (evenin == -1)){
                evenin = i;
            }

            prev = t;
        }

        if(evenin == -1 && oddin1 == -1) printf("-1\n");
        else if(evenin != -1) printf("1\n%d\n", evenin);
        else printf("2\n%d %d\n", oddin1, oddin2);

    }

}
