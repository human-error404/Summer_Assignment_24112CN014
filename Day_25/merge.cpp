#include<iostream>
using namespace std;
//Suppose the arrays are sorted
void merge(long long arr1[],long long arr2[],int m,int n)
{
   long long arr[m+n];
   int right=0;
   int left=0;
   int point=0;
   while(right<n&&left<m)
   {
    if(arr1[left]<=arr2[right])
    {
        arr[point]=arr1[left];
        point++;
        left++;
    }
    else
    {
        arr[point]=arr2[right];
        point++;
        right++;
    }
   }
   while(right<n)
   {
    arr[point++]=arr2[right++];
   }
   while(left<m)
   {
    arr[point++]=arr1[left++];
   }
   cout<<"the merged array is:"<<endl;    
    for(int i=0;i<m+n;i++)
    {
        cout<<"'"<<arr[i]<<"'";
    }
   
}
int main()
{
    long long n,m;
    cout<<"Enter the size of array 1:";
    cin>>m;
    long long arr1[m];
    cout<<"Enter "<<m<<" numbers to store in array:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    cout<<endl;
    cout<<"Enter the size of array 2:";
    cin>>n;
    long long arr2[n];
    cout<<"Enter "<<n<<" numbers to store in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    m= sizeof(arr1)/sizeof(arr1[0]);
    n= sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,m,n);

}