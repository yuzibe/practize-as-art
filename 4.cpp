#include <iostream>
#include <array>
using namespace std;
static array<int, 10> intArr{9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

void merge(array<int, 10> *intArr, array<int, 10> *tempArr, int firstIndex, int secondIndex, int endIndex)
{
    int tempIndexI = firstIndex;
    int firstIndexI = firstIndex;
    int secondIndexI = secondIndex;
    while (firstIndexI < secondIndex && secondIndexI <= endIndex)
    {
        if ((*intArr).at(firstIndexI) < (*intArr).at(secondIndexI))
        {
            (*tempArr)[tempIndexI++] = (*intArr).at(firstIndexI++);
        }
        else
        {
            (*tempArr)[tempIndexI++] = (*intArr).at(secondIndexI++);
        }
    }
    while (firstIndexI < secondIndex)
    {
        (*tempArr)[tempIndexI++] = (*intArr).at(firstIndexI++);
    }
    while (secondIndexI <= endIndex)
    {
        (*tempArr)[tempIndexI++] = (*intArr).at(secondIndexI++);
    }
    // /
    for (int i = firstIndex; i <= endIndex; i++)
    {
        (*intArr)[i] = (*tempArr).at(i);
    }
}
void mergeSort(array<int, 10> *intArr, int leftIndex, int rightIndex)
{
    if (leftIndex >= rightIndex)
    {
        return;
    }
    mergeSort(intArr, leftIndex, rightIndex + leftIndex >> 1);
    mergeSort(intArr, (rightIndex + leftIndex >> 1) + 1, rightIndex);
    array<int, 10> tempArr{0};
    merge(intArr, &tempArr, leftIndex, (rightIndex + leftIndex >> 1) + 1, rightIndex);
}

void quickSort(array<int, 10> *intArr, int leftIndex, int rightIndex)
{
    if (leftIndex >= rightIndex)
    {
        return;
    }
    int keyWord = (*intArr).at(leftIndex);
    int leftIndexI = leftIndex;
    int rightIndexI = rightIndex;
    while (rightIndexI > leftIndexI)
    {
        while (rightIndexI > leftIndexI && (*intArr).at(rightIndexI) >= keyWord)
        {
            rightIndexI--;
        }
        (*intArr)[leftIndexI] = (*intArr).at(rightIndexI);
        while (rightIndexI > leftIndexI && (*intArr).at(leftIndexI) <= keyWord)
        {
            leftIndexI++;
        }
        (*intArr)[rightIndexI] = (*intArr).at(leftIndexI);
    }
    (*intArr)[leftIndexI] = keyWord;
    quickSort(intArr, leftIndex, rightIndexI);
    quickSort(intArr, rightIndexI + 1, rightIndex);
}

int main(int argc, char const *argv[])
{
    // 归并
    // mergeSort(&intArr, 0, intArr.size() - 1);
    // 快速
    quickSort(&intArr, 0, intArr.size() - 1);
    for (int i = 0; i < intArr.size(); i++)
    {
        cout << intArr.at(i) << " ";
    }

    return 0;
}
