#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            min_index=j;
        }
        swap();
    }
}