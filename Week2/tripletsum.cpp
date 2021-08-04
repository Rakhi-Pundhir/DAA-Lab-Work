#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k;
        bool f=false;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
          cin>>a[i]; 
        }
        sort(a,a+n);
        for(i=n-1;i>=0;i--)
        {
             j=0;
             k=i-1;
            while(j<k)
            {
                if(a[j]+a[k]==a[i])
                {
                    cout<<j+1<<","<<k+1<<","<<i+1<<endl;
                    f=true;
                    break;
                }
                else if(a[j]+a[k]<a[i])
                j++;
                else
                k--;

            }
            if(f==true)
            break;
        }
        if(f==false)
        cout<<"No sequence found"<<endl;
        }
        return 0;
}