#include <bits/stdc++.h>
using namespace std;

int test;
int n, k;
string str;
vector<int> divisors;
int kount[26];
int maxlen;

int main(){
    cin >> test;
    while(test--){
        cin >> n >> k;
        cin >> str;
        divisors.clear();
        for(int i = 0; i < 26; i++) kount[i] = 0;

        for(char ch : str) kount[ch-'a']++;
        sort(kount, kount+26, greater<int>());
        //for(int i = 0; i < 26; i++) cout << kount[i] << "->";

        for(int i = 1; i*i <= k; i++){
            if(k % i) continue;
            int d1 = i;
            int d2 = k / i;
            divisors.push_back(d1);
            divisors.push_back(d2);
        }

        maxlen = -1;
        for(int divisor : divisors){
            for(int times = 1; divisor*times <= n; times++){
                int len = 0;
                for(int j = 0; j < 26; j++) len += kount[j] / times;
                if(len >= divisor) maxlen = max(maxlen, times*divisor);
            }
        }

        cout << maxlen << endl;
    }
}
