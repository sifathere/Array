#include <iostream>
using namespace std;

void printForward(int a[], int n)
{
    cout<<"Forward array: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void printReverse(int a[], int n)
{
    cout<<"Reverse array: ";
    for(int i=1;i<=n;i++)
    {
        cout<<a[n-i]<<" ";
    }
    cout<<endl;
}
int main()
{
int n;
cout<<"Number of elements: "<<endl;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cout<<"index-"<<i<<":";
    cin>>a[i];
}
printForward(a,n);
printReverse(a,n);
return 0;
}
