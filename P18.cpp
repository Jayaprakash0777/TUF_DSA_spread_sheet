/*Find the number that appears once, and other numbers twice.*/

#include<iostream>
using namespace std;
int oneTimeOccure(int n,int arr[10])
{   int c=0,temp[10];

    for(int i=0;i<n;i++)
    {  c=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            c++;
        }
    }
    temp[i]=c;
    }



    for(int i=0;i<n;i++)
    {
        if(temp[i]==1)
            return arr[i];
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
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 int re=oneTimeOccure(n,arr);
   cout<<"\nThe onetime appeared element int the array is:"<<re<<endl;

    return 0;
}


