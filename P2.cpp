/*Hashing Theory*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[12];
    cout<<"Enter array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[12];
    cout<<"Enter array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cout<<"Enter size of query:";
    cin>>q;
    while(q--)
    {
        int c;
        cin>>c;
        cout<<mpp[c]<<"\n";
    }
}

    }
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cout<<"Enter size of query:";
    cin>>q;
    while(q--)
    {
        int c;
        cin>>c;
        cout<<mpp[c]<<"\n";
    }
}

