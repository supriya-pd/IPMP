/*brute force

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q; int k;
    cin>>q>>k;
   vector<int> v;
    while(q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int x,y;
            cin>>x>>y;
            int d=x*x+y*y;
            v.push_back(d);
        }else
        {
            sort(v.begin(),v.end());
            cout<<v[k-1]<<endl;
        }
    }
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int solve()
{

}
int main()
{
    int q; int k;
    cin>>q>>k;
    priority_queue<lli> pq; // max Heap
    while(q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            lli x,y;
            cin>>x>>y;
            lli d=x*x+y*y;
            if(pq.size()==k)
            {
                if(d<pq.top())
                {
                    pq.pop();
                    pq.push(d);
                }
            }
            else
            pq.push(d);
        }else
        {
            cout<<pq.top()<<endl;
        }
    }
    return 0;
}

