#include <bits/stdc++.h>
using namespace std;

int createST(int A[], int l, int h, int ST[], int i)
{
    if (l == h)
    {
        ST[i] = A[l];
        return A[l];
    }
    int mid = (l + h) / 2;
    ST[i] = createST(A, l, mid, ST, 2 * i + 1) + createST(A, mid + 1, h, ST, 2 * i + 2);
    return ST[i];
}

int rangeSum(int ST[], int index, int lST, int hST, int l, int h)
{
    if (l > hST || h < lST) return 0;
    if (lST >= l && hST <= h) return ST[index];
    int mid = (lST + hST) / 2;
    return rangeSum(ST, 2 * index + 1, lST, mid, l, h) + rangeSum(ST, 2 * index + 2, mid + 1, hST, l, h);
}

int main()
{
    int x, y, A[20] = {0}; 
    int size = 0;
    while (cin >> x && x != -1)
    {
        A[size] = x;
        size++;
    }
    int n = pow(2, 4);
    int ST[n] = {0};
    createST(A, 0, size - 1, ST, 0);
    for (int i = 0; i < n; i++)
    {
        cout << ST[i] << " ";
    } cout << endl;

    while (cin >> x >> y && x != -1 && y != -1)
    {
        cout << rangeSum(ST, 0, 0, size - 1, x, y) << endl;
    }
    
    return 0;
}
