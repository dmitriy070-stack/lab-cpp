#include <iostream>

using namespace std;

int main()


{
    int arr[100];
    int n;

    cout<<"Enter N:";
    cin>>n;
    cout<< "Enter elements:";
    
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    int sum_positives =0;
    int count_negatives =0;

    int min_val=arr[0];
    int min_idx =0;
    int max_val = arr[0];
    int max_idx=0;

    for(int i=0; i <n;i++)
    {
        if(arr[i]>0)
        {
            sum_positives += arr[i];
        }
        if(arr[i]<0)
        {
            count_negatives++;
        }
        if (arr[i]<min_val)
        {
            min_val=arr[i];
            min_idx=i;
        }
        if(arr[i]>max_val)
        {
            max_val=arr[i];
            max_idx =i;
        }
    }
    cout<<"\nSum of positives:"<< sum_positives<<endl;
    cout<<"Count of negatives:"<< count_negatives<<endl;
    cout<<"Min:"<< min_val<<"(index "<<min_idx<<")"<<endl;
    cout<<"Max:"<< max_val<<"(index"<<max_idx<<")"<<endl;

    cout<<"Multiples of 3 (reverse):";
    for(int i =n-1;i>=0;i--)
    {
        if(arr[i] %3 ==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;



}