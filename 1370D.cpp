#include <bits/stdc++.h>
using namespace std;

int n;
int k;
int ara[200005];

bool subseq_odd(int mid){
    int index = 1;

    for(int i = 1; i <= n; i++){
        if(index % 2 == 0){
            index++;
        }
        else if(ara[i] <= mid){
            index++;
        }
    }

    return index-1 >= k;
}

bool subseq_even(int mid){
    int index = 1;

    for(int i = 1; i <= n; i++){
        if(index % 2 == 1){
            index++;
        }
        else if(ara[i] <= mid){
            index++;
        }
    }

    return index-1 >= k;
}

int bin_search(int lo, int hi){
    int ret = INT_MAX;
    while(lo <= hi){
        int mid = lo + ((hi - lo) / 2);
        if(subseq_odd(mid) || subseq_even(mid)){
            ret= min(ret, mid);
            hi = mid-1;
        }
        else lo = mid+1;
    }
    return ret;
}

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> ara[i];
    int ans = bin_search(1, 1e9+7);
    cout << ans << endl;
}
