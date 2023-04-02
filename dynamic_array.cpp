#include <iostream>
#include <string>

/*
2 2
3 1 2 3
5 9 8 7 6 5
0 1
1 4
*/

int main()
{
    int n, q;
    // std::cin >> n >> q;
    n = 2;
    q = 2;

    int *a[n];
    for (int i = 0; i < n; i++)
    {
        int k;
        std::cin >> k;

        int arr[k + 1];
        arr[0] = k;
        for (int j = 1; j <= k; j++)
        {
            std::cin >> arr[j];
        }
        a[n] = arr;
    }

    std::cout << a[0][0] << ", " << a[0][1] << ", " << a[0][2] << ", " << a[0][3] << std::endl;
    // for (int i = 0; i < n; i++)
    // {
    //     int k = a[i][0];
    //     std::cout << "k = " << k << "; ";
    //     for (int j = 1; j <= k; j++)
    //     {
    //         std::cout << a[i][j] << ", ";
    //     }
    //     std::cout << std::endl;
    // }

    // for (int q_ = 0; q_ < q; q_++)
    // {
    //     int i, j;
    //     std::cin >> i >> j;

    //     std::cout << a[i][j] << std::endl;
    // }

    return 0;
}
