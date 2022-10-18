#include <iostream>
using namespace std;
int main()
{
    int n, i, j, tmp, arr[20];
    cout<<"Enter Size:";
    cin>>n;
    cout<<"Enter Values:";
    for(i=0; i<n; i++)
    cin>>arr[i];
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp = arr[i];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    cout<<"New Array: ";
    for(i=0; i<n; i++)
    cout<<arr[i]<<" "<< endl;
    return 0;
}
