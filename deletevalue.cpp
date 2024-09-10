#include <iostream>
using namespace std;
void deleteValue(int a[], int &n, int v)
{
    int index=-1;
    for(int j=0; j<n; j++)
    {
        if(a[j]==v)
        {
            index=j;
            break;
        }
    }
    if(index != -1)
    {
        for(int j= index; j<n-1; j++)
            a[j]=a[j+1];
        n--;
    }

    else
    {
        cout<<"Value not found in array"<<endl;
    }

}

int main ()
{
    int n,v;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int j=0; j<n; j++)
        cin>>a[j];
    cout<<"Enter value to delete: ";
    cin >>v;

    deleteValue(a,n,v);
    for(int j=0; j<n; j++)
        cout<<a[j]<<" ";
    return 0;
}
