#include<bits/stdc++.h>
using namespace std;
int solve(int **mat,int n,int m)
{
    int u=INT_MAX;
    int v=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]<u)
            u=mat[i][j];
            if(mat[i][j]>v)
            v=mat[i][j];
        }
    }
    unordered_set<int> rows;
    unordered_set<int> cols;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==u || mat[i][j]==v)
            {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }
    int ans=(n-rows.size())*(m-cols.size());
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int **mat=new int*[n];
        for(int i=0;i<n;i++)
        {
            mat[i]=new int[m];
            for(int j=0;j<m;j++)
            cin>>mat[i][j];
        }
        cout<<solve(mat,n,m)<<endl;
    }
    return 0;
}
