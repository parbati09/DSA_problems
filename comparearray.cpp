#include <bits/stdc++.h>

using namespace std;
void compareArray(int arr1[],int arr2[],int size)
{
    int count=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr1[i]>arr2[i])
        {
            count[arr1]+=1;
            
        }
        else if(arr1[i]==arr2[i])
        {
           count[arr1]+=0;
           count[arr2]+=0; 
       
        }
        else 
        {
            
            count[arr2]+=1; 
        }
    }
    cout<<count[arr1];
    cout<<count[arr2];
}
int main()
{
    int n;
    cin>>n;
    
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    compareArray(arr1,arr2,n);
}