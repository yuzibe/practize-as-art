#include <iostream>
#include <array>
using namespace std;
static array<int, 8> intArr{5, 4, 3, 4, 5, 8, 3, 5};

int Game(array<int, 8> *intArr)
{
    int cutIndex = (*intArr).size();
    while (cutIndex != 0)
    {
        // 减治法一般会有明显的规模减小
        cutIndex = cutIndex / 2;
        for (int i = 0; i < cutIndex; i++)
        {
            if ((*intArr).at(i) < (*intArr).at(cutIndex + i))
            {
                (*intArr)[i] = (*intArr).at(cutIndex + i);
            }
            (*intArr)[cutIndex + i] = 0;
        }
    }
}

int compare(int a, int b)
{
    return a > b ? 1 : 0;
}

int main(int argc, char const *argv[])
{
    Game(&intArr);
    return 0;
}
