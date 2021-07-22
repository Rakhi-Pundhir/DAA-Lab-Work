#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        bool f=false;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
          cin>>arr[i]; 
        }
        int x;
        cin>>x;
        int s=0,e=n-1,mid;
        while(s<=e)
        {
            c++;
            mid=(s+e)/2;
            if(arr[mid]==x)
            {
                f=true;
                break;
            }
            else if(arr[mid]<x)
            {
                s=mid+1;
            }
            else
            e=mid-1;
        }
         if(f==true)
        cout<<"Present "<<c<<endl;
        else
        cout<<"Not Present "<<c<<endl;
    }
    return 0;
}
