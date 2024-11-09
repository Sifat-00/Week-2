#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;

        cin>>n>>m;

        string ar;

        cin>>ar;

        vector<int> v(m);

        set<int> st;

        for(int i=0;i<m;i++)
        {
            cin>>v[i];
            st.insert(v[i]);
        }

        string x;

        cin>>x;

        sort(x.begin(),x.end());

        map<int,char> mp;

        auto j = st.begin();

        for(int i=0;i<st.size();i++)
        {
            mp[*j] = x[i];
            ++j;
        }
        for(auto x:mp)
        {
            ar[x.first-1] = x.second;
        }
        cout<<ar<<"\n";
    }
    return 0;
}
