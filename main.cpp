#include <iostream>

using namespace std;

int A[4][4] = {
    1, 2, 3, 4,
    5, 6, 7, 8,
    9, 10, 11, 12,
    13, 14, 15, 16
};

void cir_print(int arr[4][4], int m, int n) {
    int x_max = n, y_max = m;
    int x = 0, y = 0;

    while(1) {
        if (x_max < 1 || y_max < 1 || x > m / 2
            || y > n / 2)
            break;

        for (int i=0;i<x_max-1;i++)
            cout << arr[x][y++] << " ";

        for (int i=0;i<y_max-1;i++)
            cout << arr[x++][y] << " ";

        for (int i=0;i<x_max-1;i++)
            cout << arr[x][y--] << " ";

        for (int i=0;i<y_max-1;i++)
            cout << arr[x--][y] << " ";

        x_max -= 2;
        y_max -= 2;
        x++, y++;
    }

}

int main() {

    cir_print(A, 4, 4);

    return 0;
}
