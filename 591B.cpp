#include <bits/stdc++.h>
using namespace std;

int n, m;
int curr_val[26];
char str[200005];
char ch1, ch2;

int main(){
    scanf("%d %d", &n, &m);
    scanf(" %s", &str);

    for(int i = 0; i < 26; i++)
        curr_val[i] = i;

    for(int i = 0; i < m; i++){
        scanf(" %c %c", &ch1, &ch2);
        for(int j = 0; j < 26; j++){
            if(curr_val[j] == ch1 - 'a')
                curr_val[j] = ch2 - 'a';
            else if(curr_val[j] == ch2 - 'a')
                curr_val[j] = ch1 - 'a';
        }
    }
    for(int i = 0; i < n; i++)
        printf("%c", curr_val[str[i]-'a']+'a');
    printf("\n");
}
