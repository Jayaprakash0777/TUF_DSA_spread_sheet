/*Second Largest Element in an Array without sorting*/
#include<iostream>
using namespace std;
int SecondLargest(int n,int arr[10])
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    int selarge=arr[0];
    for(int i=0;i<n;i++)
    { if(arr[i]==max)
      arr[i]=arr[i];
      else if(selarge<arr[i])
        selarge=arr[i];
    }
    return selarge;
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"\nEnter array elements:";
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int slarge=SecondLargest(n,arr);
    cout<<"\nThe second largest element in the array is :"<<slarge;
}
