#include <bits/stdc++.h>
using namespace std;

int  main(){

    long long int  n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long int  ara[n+10], bra[m+10];
    for(long long int  i = 1; i <= n; i++)
        scanf("%lld", ara+i);
    for(long long int  i = 1; i <= m; i++)
        scanf("%lld", bra+i);

    long long int  csa[n+10], csb[m+10];
    csa[1] = ara[1];
    for(long long int  i = 2; i <= n; i++)
        csa[i] = csa[i-1]+ara[i];
    csb[1] = bra[1];
    for(long long int  i = 2; i <= m; i++)
        csb[i] = csb[i-1]+bra[i];
    csa[0] = csb[0] = 0;

    long long int root = (long long int) sqrt(k);
    long long int  factors[root+root+4];
    long long int  index = 0;

    for(long long int  i = 1; i*i <= k; i++){
        if(k%i == 0){
            factors[index++] = i;
            factors[index++] = k/i;
        }
    }

    sort(factors, factors+index);

    long long int  ans = 0;

    for(long long int  i = 0; i < index; i++){

        if(factors[i] == factors[i-1]) continue;
        long long int  x = factors[i];
        long long int  y = k / factors[i];

        long long int  lengthkount = 0, widthkount = 0;
        for(long long int  j = 1; j+x-1 <= n; j++){
            if(csa[j+x-1]-csa[j-1] == x) lengthkount++;
        }
        for(long long int  j = 1; j+y-1 <= m; j++){
            if(csb[j+y-1]-csb[j-1] == y) widthkount++;
        }

        ans += (lengthkount*widthkount);
    }

    printf("%lld\n", ans);
}
