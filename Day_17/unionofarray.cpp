#include<iostream>
using namespace std;
//Suppose the arrays are sorted
void merge(long long arr1[],long long arr2[],int m,int n)
{
   long long arr[m+n];
   int point=0;
   for(int i=0;i<m;i++)
    {
        arr[point++]=arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[point++]=arr2[i];
    }
   cout<<"the union arrays is:"<<endl;    
    for(int i=0;i<m+n;i++)
    {
        bool isduplicate=false;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                isduplicate=true;
                break;
            }
        }
        if(!isduplicate)
        {
        cout<<"'"<<arr[i]<<"'";
        }
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
    merge(arr1,arr2,m,n);

}