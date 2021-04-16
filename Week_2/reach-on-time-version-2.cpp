#include<bits/stdc++.h>
using namespace std;

double arr(int i)
{
	i=i+1;
	double d=i*(i+1)/2;
	return d;
}
int binarySearch(int l,int r,int n,double target)
{
	if(l<=r)
	{
		int mid=(l+r)/2;
		if(arr(mid)==target)
		return mid+1;
		else if((arr(mid)<target && mid==n-1) || (arr(mid)<target && arr(mid+1)>target))
		return mid+1;
		else if(arr(mid)<target)
		return binarySearch(mid+1,r,n,target);
		else
		return binarySearch(l,mid-1,n,target);
	}
	return 0;
}
int main()
{
	int t,n,p,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>p>>k;
		double target=(p*60-k)/5;
		cout<<binarySearch(0,n-1,n,target)<<endl;
	}
}