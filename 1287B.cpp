#include <bits/stdc++.h>
using namespace std;

map <string, bool> mp;

int main(){

    int n, k;
    cin >> n >> k;
    string str[n+3];
    for(int i = 0; i < n; i++){
        cin >> str[i];
        mp[str[i]] = true;
    }

    int kount = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            string temp = "";
            for(int x = 0; x < k; x++){
                if(str[i][x] == str[j][x]) temp += str[i][x];
                else if(str[i][x] == 'S' && str[j][x] == 'T' ) temp += 'E';
                else if(str[i][x] == 'T' && str[j][x] == 'S' ) temp += 'E';
                else if(str[i][x] == 'T' && str[j][x] == 'E' ) temp += 'S';
                else if(str[i][x] == 'E' && str[j][x] == 'T' ) temp += 'S';
                else if(str[i][x] == 'E' && str[j][x] == 'S' ) temp += 'T';
                else if(str[i][x] == 'S' && str[j][x] == 'E' ) temp += 'T';
            }
            if(mp.count(temp)) kount++;
        }
    }

    printf("%d\n", kount/3);
}
