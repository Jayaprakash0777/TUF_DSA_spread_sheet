/*Left rotate an array by D places*/

#include<iostream>
using namespace std;
void rightRotate(int n,int arr[10],int k)
{  int temp;
   while(k>0)
   {   temp=0;
       for(int i=0;i<n;i++)
   {
       if(i!=n-1)
       {    if(i==0)
            {temp=arr[i];
            }
           arr[i]=arr[i+1];
       }
       else
       {
        arr[i]=temp;
       }
   }
   k--;
   }
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
    int k;
    cout<<"Enter k value to rotate:";
    cin>>k;
    cout<<"The given array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    rightRotate(n,arr,k);
    cout<<"\nThe altered array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


