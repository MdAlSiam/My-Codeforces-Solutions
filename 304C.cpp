#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("-1\n");
        return 0;
    }

    for(int i = 0; i < n; i++)
        printf(i == n-1 ? "%d\n" : "%d ", i);
    for(int i = 0; i < n; i++)
        printf(i == n-1 ? "%d\n" : "%d ", i);
    for(int i = 0; i < n; i++)
        printf(i == n-1 ? "%d\n" : "%d ", (i+i)%n);
}
