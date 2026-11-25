#include <iostream>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    int r1, c1, r2, c2;
    int count = 0;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            char x;
            cin >> x;

            if (x == 'o')
            {
                count++;

                if (count == 1)
                {
                    r1 = i;
                    c1 = j;
                }
                else
                {
                    r2 = i;
                    c2 = j;
                }
            }
        }
    }

    int rows, cols;

    if (r1 > r2)
        rows = r1 - r2;
    else
        rows = r2 - r1;

    if (c1 > c2)
        cols = c1 - c2;
    else
        cols = c2 - c1;

    cout << rows + cols;

    return 0;
}
