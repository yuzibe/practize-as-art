#include <iostream>
using namespace std;
// A 是 source 柱子
// C 是 destin 柱子
// 所以每次都打印 A -> C
void hanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << A << "->" << C << endl;
        return;
    }
    hanoi(n - 1, A, C, B);
    cout << A << "->" << C << endl;
    hanoi(n - 1, B, A, C);
}

int main(int argc, char const *argv[])
{
    hanoi(3, 'A', 'B', 'C');
    return 0;
}
