#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;

int main()
{
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int n, k;
    cin >> k >> n;

    int rank[n+1][k+1], cow;
    for(int i=0; i<k; i++){
        for(int j=0; j<n && cin >> cow; j++)
            rank[cow][i] = j;
    }

    int ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i == j)
                continue;
            bool consistant = true;
            for(int race=0; race<k; race++)
                consistant &= rank[i][race]< rank[j][race];
            ans += consistant;
        }
    }

    cout << ans;

    return 0;
}

