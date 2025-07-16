/*bubble sort*/

#include <iostream>
using namespace std;
int main() {
  int n ;
  cout <<"\n Enter n:";
  cin>>n;
  int arr[n];
  cout<<"\n Enter the array elements:";
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  cout<<"\n The array elements are :";
  for(int i=0;i<n;i++)
  {
      cout<<" "<<arr[i];
  }
  for(int i=n-1;i>=0;i--)
  {
      
      for(int j=0;j<=i+1;j++)
      {
          if(arr[j]>arr[j+1])
          {
              int t=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=t;
          }
      }
      
  }
  cout<<"\n The sorted  array elements are :";
  for(int i=0;i<n;i++)
  {
      cout<<" "<<arr[i];
  }
}
