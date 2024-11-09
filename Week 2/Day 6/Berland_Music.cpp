#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>ar(n);
        for(int i=0;i<n;i++) cin >> ar[i];
        string x;
        cin >> x;

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[ar[i]] = i;
        }

        set<int> st1,st2;
        int cnt = 1;
        for(int i=0;i<n;i++)
        {
            if(x[i] == '0')
            {
                st1.insert(ar[i]);
            }
            else st2.insert(ar[i]);
        }
        vector<int> v(n);
        for(auto x : st1)
        {
            int pos = mp[x];
            v[pos] = cnt;
            cnt++;
        }    
        for(auto x : st2)
        {
            int pos = mp[x];
            v[pos] = cnt;
            cnt++;
        } 
        for(auto x : v)cout << x <<" ";
        cout << endl;
    }
    return 0;
}

