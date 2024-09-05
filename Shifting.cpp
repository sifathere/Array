#include <iostream>
using namespace std;

void shiftArr(int a[], int n, int i, int x)
{
    int result[n];
    for(int j=0; j<n; j++)
    {
        result[j]=0;
    }
    if(x==0)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j<n)
            {
                result[j+i]=a[j];
            }
        }
    }
    else if(x==1)
    {
        for(int j=0; j<n; j++)
        {
            if(j-i>=0)
            {
                result[j-i]= a[j];
            }
        }
    }
    for(int j=0; j<n; j++)
    {
        cout<<result[j]<<" ";
    }
    cout<<endl;
}

int main ()
{
    int n,i,x;
    cout<<"Number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Elements: ";

    for(int j=0; j<n; j++)
        cin>>a[j];

    cout<<"Enter number of position to shift: ";
    cin>>i;

    cout<<"Enter direction to shift(0 for right, 1 for left): ";
    cin>>x;

    shiftArr(a,n,i,x);

    return 0;
}
