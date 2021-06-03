#include<bits/stdc++.h>
using namespace std;

int func(string s)
{
    int n=s.length();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        unordered_map<char,int> m;
        int f=++m[s[i]];
        int max=f;
        char min=s[i];
        for(int j=i+1;j<n;j++)
        {
            if(m.find(s[j])==m.end())
            {
            f=++m[s[j]];
            if(f>max)
            max=f;
            if(f<m[min])
            min=s[j];
            }else
            {
            f=++m[s[j]];
            if(f>max)
            max=f;
            }
            sum = sum + (max-m[min]);
        }
        m.clear();
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<func(s)<<endl;
    }
    return 0;
}
