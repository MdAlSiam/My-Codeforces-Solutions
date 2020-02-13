#include <bits/stdc++.h>
using namespace std;

map<string, int> id;
int exists[100005];
string title1, ex1, title2, ex2;

int main(){
    //freopen("-1.txt", "r", stdin);
    int idno = 0;
    while(1){
        cin >> title1;
        if(title1 == "----------") break;
        cin >> ex1 >> title2 >> ex2;
        title1 += ex1;
        title2 += ex2;
        id[title1] = id[title2] = idno++;
    }

    string query;
    int nowexisting = 0;
    while(1){
        cin >> query;
        if(query == "END") break;

        if(query == "+"){
            cin >> title1 >> ex1;
            title1 += ex1;
            exists[id[title1]] = 1;
            nowexisting++;
        }
        else if(query == "-"){
            cin >> title1 >> ex1;
            title1 += ex1;
            exists[id[title1]] = 0;
            nowexisting--;
        }
        else if(query == "UNION"){
            cout << nowexisting << endl;
        }
        else if(query == "FIND"){
            cin >> title1 >> ex1;
            title1 += ex1;
            if(exists[id[title1]] == 0)
                cout << "404" << endl;
            else
                cout << "FOUND" << endl;
        }
    }
}
