#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string name = "Timur";
        sort(name.begin(),name.end());
        int n;
        cin >> n;
        string ar;
        cin >> ar;
        sort(ar.begin(),ar.end());
        if(ar == name) cout << "YES" << endl;
        else cout  << "NO" << endl;
    }
    return 0;
}
