#include <bits/stdc++.h>
using namespace std;

const int fen[] = {25, 18, 15, 12, 10, 8, 6, 4, 2, 1, 0, 0, 0, 0, 0, 0};

class node {
    public:
        string name;
        int score;
        int ci[155];
        node() {
            score = 0;
            memset(ci, 0, sizeof(ci));
        }
} f[291];

int m, n, pos;
string s;

bool compare1(node a, node b) {
    if (a.score != b.score) return a.score > b.score;
    for (int i = 0; i < 55; i++) {
        if (a.ci[i] != b.ci[i]) {
            return a.ci[i] > b.ci[i];
        }
    }
}

bool compare2(node a, node b) {
    if (a.ci[0] != b.ci[0]) return a.ci[0] > b.ci[0];
    if (a.score != b.score) return a.score > b.score;
    for (int i = 1; i < 55; i++) {
        if (a.ci[i] != b.ci[i]) {
            return a.ci[i] > b.ci[i];
        }
    }
}

int main() {
    cin >> m;
    pos = 0;
    for (int i = 0; i < m; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> s;
            bool flag = false;
            for (int k = 0; k < pos; k++) {
                if (f[k].name == s) {
                    if (j < 10) f[k].score += fen[j];
                    f[k].ci[j]++;
                    flag = true;
                }
            }
            if (not flag) {
                f[pos].name = s;
                if (j < 10) f[pos].score += fen[j];
                f[pos].ci[j]++;
                pos++;
            }
        }
    }

    sort(f, f+pos, compare1);
    cout << f[0].name << endl;
    sort(f, f+pos, compare2);
    cout << f[0].name << endl;
}
