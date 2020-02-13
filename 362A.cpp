#include <bits/stdc++.h>
using namespace std;

int dp[14][14][14][14];

int findans(int x1, int y1, int x2, int y2){

    //cout << "Reached: " << x1 << "  " << y1 << " " << x2 << " " << y2 << endl;

    if(x1 >= 8 || x1 < 0 || y1 >= 8 || y1 < 0 || x2 >= 8 || x2 < 0 || y2 >= 8 || y2 < 0 )
        return 0;

    if(x1 == x2 && y1 == y2) return 1;

    int &ret =  dp[x1][y1][x2][y2];

    if(ret != -1) return ret;

    ret = 0;

    for(int i = -2; i <= 2; i += 4){
        for(int j = -2; j <= 2; j += 4){
            for(int k = -2; k <= 2; k += 4){
                for(int l = -2; l <= 2; l += 4){
                    ret |= findans(x1+i, y1+j, x2+k, y2+l);
                    if(ret) return ret;
                }
            }
        }
    }

    return ret;
}

int main(){

    //freopen("-1.txt", "r", stdin);
    //freopen("-2.txt", "w", stdout);

    int test;
    scanf("%d", &test);

    while(test--){

    char str[10][10];
    int x1, y1, x2, y2;
    x1 = y1 = x2 = y2 = -1;
    for(int i = 0; i < 8; i++){
        scanf(" %s", str[i]);
        for(int j = 0; j < 8; j++){
            if(str[i][j] == 'K' && x1 == -1){
                x1 = i;
                y1 = j;
            }
            else if(str[i][j] == 'K'){
                x2 = i;
                y2 = j;
            }
        }
    }


    memset(dp, -1, sizeof(dp));

    if(findans(x1, y1, x2, y2)) printf("YES\n");
    else printf("NO\n");

    } //end of each test
}
