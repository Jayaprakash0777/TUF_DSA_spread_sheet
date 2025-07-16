/*Remove duplicates from Sorted array*/
#include<iostream>
using namespace std;
void sortt(int n,int arr[10])
{   int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int  removeDuplicate(int n,int arr[10])
{ int c=0;
for(int i=0;i<n;i++)
    {

            if(arr[i]!=arr[i+1])
            {
                arr[c]=arr[i];
                c++;
            }

    }
    cout<<"\nThe altered array is :";
    for(int i=0;i<c;i++)
    {
        cout<<arr[i]<<" ";
    }
    return c;
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
    sortt(n,arr);
    int nounique=removeDuplicate(n,arr);
    cout<<"\nThe no of unique elements in the array is :"<<nounique;
}


