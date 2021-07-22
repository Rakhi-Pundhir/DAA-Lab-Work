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
        for(i=0;i<n;i++)
        {
          c++;
          if(arr[i]==x)
          {
            f=true;
            break;
          }

        }
        if(f==true)
        cout<<"Present "<<c<<endl;
        else
        cout<<"Not Present "<<c<<endl;
        

    }
    return 0;
}
