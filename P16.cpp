/*Find missing number in an array*/

#include<iostream>
using namespace std;
int missingData(int n,int arr[10])
{ int c=0,sum=0;
       for(int i=1;i<=n;i++)
   {
       c+=i;
   }
      for(int i=0;i<n-1;i++)
   {
       sum+=arr[i];
   }
        if(sum==c)
        return 0;
        else
        return c-sum;
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[10];
    cout<<"Enter the array elements :";
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
   /* int d;
    cout<<"Enter data to be search:";
    cin>>d;*/
    cout<<"The given array is :";
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

    int r=missingData(n,arr);
    cout<<"\nResult:"<<r;
}


