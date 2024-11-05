#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int ar[n];

        map<int,int> mp;
        map<int,int>mp2;
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
            if(mp.find(ar[i]) == mp.end())
            {
                mp[ar[i]] = i;
            }
            mp2[ar[i]] = i;
        }
        while(x--)
        {
            int a,b;
            cin >> a >> b;
            if(mp.find(a)!= mp.end() && mp2.find(b) != mp2.end() && mp[a]<=mp2[b]) cout <<"YES" << endl;
            else cout <<"NO" << endl;
        }
        // for(auto x : mp)
        // {
        //     cout << x.first <<" " << x.second << endl;
        // }
    }
    return 0;
}
