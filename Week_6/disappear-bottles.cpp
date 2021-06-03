#include<bits/stdc++.h>  // This solution exceeds time limit
using namespace std;
int func(string s)
{
    bool flag=false;
    
    string str="";
    do{
        str="";
        int n=s.length();
        int i=0;
        flag=false;
        while(i<n-1)
        {
            if((s[i]=='A' && s[i+1]=='B') || (s[i]=='B' && s[i+1]=='B'))
            {
                flag=true;
                i=i+2;
                break;
            }else
            {
                str=str+s[i];
                i++;
            }
        }
        if(i!=n)
        s=str+s.substr(i,n-i);
        else
        s=str;
        
    }while(flag);
    return s.length();
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<func(s)<<endl;
    }
    return 0;
}

