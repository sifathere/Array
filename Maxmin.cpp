#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int max=array[0], min=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    cout<<"Maximum number is "<<max<<endl;
    cout<<"Minimum number is "<<min<<endl;

    return 0;
}
