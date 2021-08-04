#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,i,j,p=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
int d;
cin>>d;
for(j=n-1;j>0;j--)
{
i=0;
while(i<j)
{
    if(a[i]+d==a[j])
    {
        p++;
        break;
    }
    if(a[i]+d<a[j])
        i++;
    else
    break;
}
}
cout<<p<<endl;
}
return 0;
}