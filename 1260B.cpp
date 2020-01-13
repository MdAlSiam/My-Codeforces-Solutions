#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a > b) swap(a, b);
        if(b > 2*a) printf("NO\n");
        else if(a == b && b == 0) printf("YES\n");
        else if(a == 0 || b == 0) printf("NO\n");
        else if( (a+b)%3 == 0 ) printf("YES\n");
        else printf("NO\n");
    }
}
