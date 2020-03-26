#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long int n;
    scanf("%lld", &n);

    long long int arr[n+1];
    for(long long int i = 0; i < n; i++)
        scanf("%lld", arr+i);

    printf("%lld", arr[0]);
    long long int temp = arr[0];
    for(long long int i = 1; i < n; i++)
        {printf(" %lld", arr[i]+temp); temp = max(temp, arr[i]+temp);}
    printf("\n");
}
