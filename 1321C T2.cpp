#include <bits/stdc++.h>
using namespace std;

int main(){

    int len;
    cin >> len;

    string input;
    cin >> input;

    int kount = 0;

    for(char ch = 'z'; ch >= 'b'; ch--){

    while(1){
        bool cut = false;
        for(int i = len-1; i >= 0; i--){
            if(i == len-1 && input[i] == ch && input[i-1] == input[i]-1){
                string now = "";
                for(int j = 0; j < i; j++) now += input[j];
                for(int j = i+1; j < len; j++) now += input[j];
                len--;
                input = now;
                cut = true;
                kount++;
                break;
            }
            else if(i == 0 && input[i] == ch && input[i+1] == input[i]-1){
                string now = "";
                for(int j = 0; j < i; j++) now += input[j];
                for(int j = i+1; j < len; j++) now += input[j];
                len--;
                input = now;
                cut = true;
                kount++;
                break;
            }
            else if((input[i-1] == input[i]-1 || input[i+1] == input[i]-1) && (input[i] == ch )){
                string now = "";
                for(int j = 0; j < i; j++) now += input[j];
                for(int j = i+1; j < len; j++) now += input[j];
                len--;
                input = now;
                cut = true;
                kount++;
                break;
            }
        }
        if(!cut) break;
    }

    }

    cout << kount << endl;
}

