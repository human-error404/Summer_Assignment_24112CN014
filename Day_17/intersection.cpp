#include<iostream>
using namespace std;
//Suppose the arrays are sorted
void merge(long long arr1[],long long arr2[],int m,int n)
{
   long long arr[m+n];
   int point=0;
   for(int i=0;i<m;i++)
    {
        if(i>0&&arr1[i]==arr1[i-1])
    {
        continue;
    }
        bool common=false;
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                common=true;
                arr[point++]=arr1[i];
                break;
            }
        }
        
            
        
    }
    for(int i=0;i<point;i++)
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
    merge(arr1,arr2,m,n);

}