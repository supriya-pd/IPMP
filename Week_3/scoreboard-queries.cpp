// this first solution gave TLE because inside queries loop, you are running loop of n

/*#include <bits/stdc++.h>
using namespace std;

int solve(int arr[],int n)
{
unordered_set<int> s;
int c=0;
for(int i=0;i<n;i++)
{
if(s.find(arr[i])==s.end())
{
    s.insert(arr[i]);
    c++;
}
}
return c+1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int l;
        int r;
        for(int i=0;i<q;i++)
        {
            cin>>l>>r;
            arr[l-1]=r;
            cout<<solve(arr,n)<<endl;
        }
    }
    return 0;
}*/


// this second solution got accepted-- concept is very simple of this problem--#rank is n+1 if all elements are distinct / #rank is always number of distinct elements +1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n];
        int l,r;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        for(int i=0;i<q;i++)
        {
            cin>>l>>r;
            m[arr[l-1]]--;
            if(m[arr[l-1]]==0)
            m.erase(arr[l-1]);
            m[r]++; arr[l-1]=r;
            cout<<m.size()+1<<endl;
        }
    }
    return 0;
}


