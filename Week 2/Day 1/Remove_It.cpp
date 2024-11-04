#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target;
    cin >> n >> target;
    int ar[n];
    for(int i=0;i<n;i++) cin >> ar[i];
    for(auto x : ar)
    {
        if(x!=target) cout << x << " ";
    }
    return 0;
}