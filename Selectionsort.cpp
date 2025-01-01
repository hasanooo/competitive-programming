#include<bits/stdc++.h>
using namespace std;

vector<int> selectionsort(vector<int>&arr)
{
     int k=0;
     int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
    return arr;
}
vector<int> bubblesortsort(vector<int>&arr)
{
     int k=0;
     int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    }
    return arr;
}
vector<int> insertsortsort(vector<int>&arr)
{
     int j,k;
     int n=arr.size();
    for(int i=1;i<n;i++)
    {
        j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
                k=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=k;
                j--;
        }

    }
    return arr;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>printselectionsort=selectionsort(arr);
    for(int i=0;i<printselectionsort.size();i++)
    {
         cout<<printselectionsort[i]<<endl;
    }

   vector<int>printBubblesort=bubblesortsort(arr);
    for(int i=0;i<printBubblesort.size();i++)
    {
         cout<<printBubblesort[i]<<endl;
    }
    vector<int>printInsertsort=insertsortsort(arr);
    for(int i=0;i<printInsertsort.size();i++)
    {
         cout<<printInsertsort[i]<<endl;
    }
}
