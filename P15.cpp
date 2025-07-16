/*Find the union*/

#include<iostream>
using namespace std;
void unionArray(int n,int arr1[10],int m,int arr2[10])
{   int c=0,temp[10];

    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
        if(arr1[i]==arr2[j])
        {
            temp[i]=arr1[i];
        }

    }

    }


    cout<<"Temp:";
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr1[10];
    cout<<"Enter the array 1 elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter m:";
    cin>>m;
    int arr2[10];
    cout<<"Enter the array 2 elements :";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Array 1 is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"Array 2 is:";
    for(int i=0;i<m;i++)
    {
        cout<<arr2[i]<<" ";
    }
    unionArray(n,arr1,m,arr2);

    return 0;
}


