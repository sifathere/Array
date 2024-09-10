#include <iostream>
using namespace std;

int main()
{
    int array[3][3], i, j, sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + array[i][j];
            }
        }
    }
    cout << sum << endl;
   
 return 0;
}
