#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MEM(a, b) memset(a, (b), sizeof(a))
using namespace std;
void solve()
{
    int n,k,p;
    cin >> n >> p >> k;
    int rem = p*60 - k;
    int val = (sqrt(rem*8/5+1)-1)/2;
    if(val>n)
       val = n; 
    cout << val << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}