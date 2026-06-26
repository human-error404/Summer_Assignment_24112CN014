#include<iostream>
using namespace std;
//assume array is sorted
int binary(long long arr1[],int m,int target)
{
    int high=m-1;
    int low=0;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr1[mid]==target)
        {
            return mid;
        }
        else if(arr1[mid]<target)
        {
            return low=mid+1;
        }
        else
        {
            return high=mid-1;
        }
    }
    return -1;
}
int main()
{
    long long m,target;
    cout<<"Enter the size of array 1:";
    cin>>m;
    long long arr1[m];
    cout<<"Enter "<<m<<" numbers to store in array:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    cout<<"give the target:";
    cin>>target;
    cout<<binary(arr1,m,target);

}