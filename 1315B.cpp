#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int test;
    scanf("%lld", &test);
    while(test--){

    long long int a, b, mytk;
    scanf("%lld %lld %lld", &a, &b, &mytk);
    char str[100005];
    scanf(" %s", str+1);

    long long int len = strlen(str+1);
    long long int pos[100005], cc[100005], index = 0;
    pos[index++] = 1;
    for(long long int i = 2; i <= len-1; i++)
        if(str[i] != str[i-1]) pos[index++] = i;
    cc[index-1] = (str[pos[index-1]] == 'A' ? a : b);
    for(long long int i = index-1-1; i >= 0; i--)
        cc[i] = cc[i+1] + (str[pos[i]] == 'A' ? a : b);

    if(mytk >= cc[0]){printf("1\n"); continue;}
    if(mytk < cc[index-1]){printf("%lld\n", len); continue;}
    for(long long int i = index-1-1; i >= 0; i--){
        if(cc[i] > mytk){
            printf("%lld\n", pos[i+1]);
            break;
        }
    }

    }//end of test
}
