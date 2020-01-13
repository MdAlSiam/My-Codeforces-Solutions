#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        string in;
        cin >> in;
        int len = in.length();
        queue<int> q_odd;
        queue<int> q_even;
        for(int i = 0; i < len; i++){
            if((in[i]-'0') & 1) q_odd.push(in[i]-'0');
            else q_even.push(in[i]-'0');
        }
        while(1){
            if(q_odd.empty() && q_even.empty()) break;
            if(q_odd.empty()){
                cout << q_even.front();
                q_even.pop();
            }
            else if(q_even.empty()){
                cout << q_odd.front();
                q_odd.pop();
            }
            else if(q_even.front() < q_odd.front()){
                cout << q_even.front();
                q_even.pop();
            }
            else{
                cout << q_odd.front();
                q_odd.pop();
            }
        }
        cout << endl;
    }
}
