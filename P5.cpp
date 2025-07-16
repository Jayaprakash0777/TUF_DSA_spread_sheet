/*selection sort*/

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
  for(int i=0;i<n-1;i++)
  {
      int min=i;
      for(int j=i+1;j<n;j++)
      {
          if(arr[j]<arr[min])
          min=j;
      }
      int temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
  }
  cout<<"\n The sorted  array elements are :";
  for(int i=0;i<n;i++)
  {
      cout<<" "<<arr[i];
  }
}
