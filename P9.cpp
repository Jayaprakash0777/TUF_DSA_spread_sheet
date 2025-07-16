/*Check if the array is sorted*/
#include<iostream>
using namespace std;
bool checkSort(int n,int arr[10])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
               return false;
            }
        }
        return true;
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
    cout<<"The given array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    if(checkSort(n,arr)==true)
        cout<<"The given array is sorted";
    if(checkSort(n,arr)==false)
        cout<<"\nThe given array is unsorted";
    return 0;
}


