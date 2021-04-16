#include<bits/stdc++.h>
#define int long long
using namespace std;

void fastio() { ios::sync_with_stdio(0); cin.tie(0); }
void solve()
{
    int n,k,p; cin>>n>>p>>k;

    int total = 0;
 
    for (int i=1;i<=n;i++){
        total += 5*i;
        if ((total+k)>p*60){
            cout<<--i<<"\n";
            return;
        }
    }
    cout<<n << "\n";
}

int32_t main(){ fastio(); 
int t;
cin >> t;
while(t--)
{
    solve();
}

}