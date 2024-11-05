#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    int ar[n];
    set<int> st;
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    vector<int> v(n);
    for(int i=n-1;i>=0;i--)
    {
        st.insert(ar[i]);
        v[i] = st.size();
    }
    while(x--)
    {
        int idx;
        cin >> idx;
        idx--;
        cout << v[idx] << endl;
    }
    return 0;
}