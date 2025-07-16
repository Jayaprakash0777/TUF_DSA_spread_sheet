/*Linear search*/

#include<iostream>
using namespace std;
int checkData(int n,int arr[10],int d)
{ int c=0,k=0;
       for(int i=0;i<n;i++)
   {
       if(arr[i]==d)
        {   c++;
            k=i;
        }
   }
   if(c>0)
    return k;
    else
        return -1;
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[10];
    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<"Enter data to be search:";
    cin>>d;
    cout<<"The given array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    int r=checkData(n,arr,d);
    cout<<"\nResult:"<<r;
}


