#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        bool flag = true;
        int n;
        cin >>n;
        char ar[2][n];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> ar[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ar[0][i] == ar[1][i]) continue;
            else if(ar[0][i] == 'G' && ar[1][i] == 'B') continue;
            else if(ar[0][i] == 'B' && ar[1][i] == 'G') continue;
            else 
            {
                //cout << ar[0][i] <<" "  << ar[1][i] << endl;
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;

        else cout <<"NO" << endl;
    }
    return 0;
}