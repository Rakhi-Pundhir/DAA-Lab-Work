#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int n,int s,int e,int x)
{
    int result=-1;
    while(s<=e){
    int mid=s+(e-s)/2;
    if(arr[mid]==x)
    {
        result=mid;
        e=mid-1;
    }
    else if(arr[mid]<x)
    {
        s=mid+1;
    }
    else
    e=mid-1;
    }
    return result;
    
}
int last(int arr[],int n,int s,int e,int x)
{
    int result=-1;
    while(s<=e){
    int mid=s+(e-s)/2;
    if(arr[mid]==x)
    {
        result=mid;
        s=mid+1;
    }
    else if(arr[mid]<x)
    {
        s=mid+1;
    }
    else
    e=mid-1;
    }
    return result;
    
}
int main()
{
int t;
cin>>t;
while(t--)
{
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
int x,s=0,e=n-1;
cin>>x;

int fo=first(a,n,s,e,x);
int lo=last(a,n,s,e,x);
if( fo!=-1 && lo!=-1){
cout<<lo-fo+1<<endl;}
else
cout<<"element does not exist\n";

}
return 0;
}