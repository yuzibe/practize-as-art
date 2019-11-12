#include <iostream>
#include <array>

using namespace std;

static array<array<int, 10>, 10> intMap{0};

void Full(int number, int begin, int size)
{
    if (size == 0)
        return;
    int x = begin;
    int y = begin;
    if (size == -1)
    {
        intMap[--x][--y] = number++;
        return;
    }
    // 二维数组最好使用 ij 来确定位置， ij 最好不要为循环变量
    for (int t = 0; t < size - 1; t++)
    {
        intMap[x++][y] = number++;
    }
    for (int t = 0; t < size - 1; t++)
    {
        intMap[x][y++] = number++;
    }
    for (int t = 0; t < size - 1; t++)
    {
        intMap[x--][y] = number++;
    }
    for (int t = 0; t < size - 1; t++)
    {
        intMap[x][y--] = number++;
    }

    Full(number, begin + 1, size - 2);
}
int main(int argc, char const *argv[])
{
    int M;
    cin >> M;
    Full(1, 0, M);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << intMap.at(i).at(j) << " ";
        }
        cout << endl;
    }
    return 0;
}
