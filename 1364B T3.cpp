#include <bits/stdc++.h>
using namespace std;

int test;
int n;
int ara[100005];
int ans[100005];
int index;

bool isPeak(int pos){
    return ara[pos-1] < ara[pos] && ara[pos] > ara[pos+1];
}

bool isVelly(int pos){
    return ara[pos-1] > ara[pos] && ara[pos] < ara[pos+1];
}

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> ara[i];

        index = 0;

        ans[index++] = ara[1];

        for(int i = 2; i <= n-1; i++)
            if(isPeak(i) || isVelly(i))
                ans[index++] = ara[i];

        ans[index++] = ara[n];

        printf("%d\n", index);
        for(int i = 0; i < index; i++)
            printf(i == index-1 ? "%d\n":"%d ", ans[i]);

    }
}
