#include <iostream>
using namespace std;

void rotateArray(int a[], int n, int i, int x)
{
    int result[n];
    for(int j=0; j<n; j++)
        result[j]=0;

    if (x==0)
    {
        for(int j=0; j<n; j++)
            result[(j+i)%n]=a[j];
    }
    else if (x==1)
    {
        for(int j=0; j<n; j++)
            result [(j-i+n)%n]=a[j];
    }

    for(int j=0; j<n; j++)
        cout<<result[j]<<" ";
    cout<<endl;
}

int main()
{
    int n,i,x;
    cout<<"Number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";

    for(int j=0; j<n; j++)
    {
        cin>>a[j];
    }

    cout<<"Number of position to rotate: ";
    cin>>i;

    cout<<"Enter direction to rotate(0 for right 1 for left): ";
    cin>>x;

    rotateArray(a,n,i,x);

    return 0;
}
