/*Move Zeros to end*/

#include<iostream>
using namespace std;
void shiftZerostoEnd(int n,int arr[10])
{ int c=0;
       for(int i=0;i<n;i++)
   {
       if(arr[i]!=0)

      {
       arr[c]=arr[i];
       c++;
      }
   }
   for(int i=c;i<n;i++)
    arr[i]=0;
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

    shiftZerostoEnd(n,arr);
    cout<<"\nThe altered array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


