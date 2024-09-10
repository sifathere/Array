#include <iostream>
using namespace std;

void insertValue(int a[], int &n, int v, int i)
{
    for (int j = n; j > i; j--)
        a[j] = a[j - 1];


    a[i] = v;
    n++;
}

int main() {
    int n, v, i;

    cout << "Number of elements: ";
    cin >> n;

    int a[n + n];
    cout << "Elements of array: ";
    for (int j = 0; j < n; j++)
        cin >> a[j];


    cout << "Enter value to insert: ";
    cin >> v;
    cout << "Enter index to insert: ";
    cin >> i;

    insertValue(a, n, v, i);

    for (int j = 0; j < n; j++)
        {
        cout << a[j] << " ";
        }


    return 0;
}
