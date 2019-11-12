#include <iostream>
#include <array>
using namespace std;
static array<int, 10> intArr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 折半查找
int find(array<int, 10> intArr, int keyWord)
{
    int leftIndex = 0;
    int rightIndex = intArr.size() - 1;
    while (leftIndex < rightIndex)
    {
        int midIndex = (leftIndex + rightIndex) >> 1;
        if (intArr.at(midIndex) == keyWord)
        {
            return midIndex;
        }
        if (intArr.at(midIndex) < keyWord)
        {
            leftIndex = midIndex - 1;
        }
        else
        {
            rightIndex = midIndex + 1;
        }
    }
    return -1;
}

// 二叉树查找
static array<int, 8> arrTree{5, 3, 7, 2, 4, 6, 8, 1};
int treeFind(array<int, 8> intArr, int rootIndex, int keyWord)
{
    if (rootIndex > arrTree.size() - 1)
    {
        return -1;
    }
    if (arrTree[rootIndex] == keyWord)
    {
        return rootIndex;
    }
    if (arrTree[rootIndex] > keyWord)
    {
        treeFind(intArr, rootIndex * 2 + 1, keyWord);
    }
    else
    {
        treeFind(intArr, rootIndex * 2 + 2, keyWord);
    }
}
int main(int argc, char const *argv[])
{
    int res = //find(intArr, 3);
        treeFind(arrTree, 0, 1);
    cout << res;
    return 0;
}
