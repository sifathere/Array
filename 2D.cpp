#include <iostream>
using namespace std;

int main()
{
    int array[3][3], i, j, sum = 0;
    float avg;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"Enter value for array["<<i<<"]["<<j<<"]: ";
            cin>>array[i][j];
            sum = sum + array[i][j];
        }
    }
    avg = sum/9;
    cout<<"Average of all elements in array: "<<avg;

    return 0;
}
