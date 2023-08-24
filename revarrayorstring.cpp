#include<iostream> 
using namespace std; 
void revarray(int arr[] , int start , int end)
{
    while (start<end)
    { 
        int temp = arr [ start];
        arr[start] = arr [ end];
        arr[end]  = temp ; 
        start ++;
        end -- ;
    }
    
    

}

void printArray(int arr[] , int size)
{
    for (int i = 0; i < size; i++)
    {
      cout<<arr[i];
      cout<<endl;
    }
    
}
int main(){
    int n=0 , arr[10]; ; 
    cout<<"Enter number of elements in the array";
    cin>>n;
    for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
printArray(arr  , n );
revarray(arr ,0 , n-1);
printArray(arr  , n );
    return 0;
}