/*Left Rotate an array by one place*/

#include<iostream>
using namespace std;
void leftRotate(int n,int arr[10])
{   int in=arr[0];
   for(int i=0;i<n;i++)
   {    if(i!=n-1)
       arr[i]=arr[i+1];
       else
        arr[i]=in;
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
    cout<<"The given array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    leftRotate(n,arr);
    cout<<"\nThe altered array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


