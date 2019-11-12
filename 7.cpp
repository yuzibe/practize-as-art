#include <iostream>
#include <array>
using namespace std;
static array<int, 10> arrHeap{5, 3, 7, 2, 4, 6, 8, 1, 9, 0};

void siftHeap(array<int, 10> *arrHeap, int rootIndex, int heapSize)
{
    int leftChildIndex = rootIndex * 2 + 1;
    int selectChildIndex = leftChildIndex;
    while (selectChildIndex < heapSize)
    {
        if (selectChildIndex + 1 < heapSize && (*arrHeap).at(selectChildIndex) < (*arrHeap).at(selectChildIndex + 1))
        {
            selectChildIndex = selectChildIndex + 1;
        }
        if ((*arrHeap).at(rootIndex) > (*arrHeap).at(selectChildIndex))
            break;
        else
        {
            int temp = (*arrHeap).at(rootIndex);
            (*arrHeap)[rootIndex] = (*arrHeap).at(selectChildIndex);
            (*arrHeap)[selectChildIndex] = temp;
            rootIndex = selectChildIndex;
            selectChildIndex = rootIndex * 2 + 1;
        }
    }
}
int main(int argc, char const *argv[])
{
    for (int i = ((arrHeap.size() - 1) / 2); i >= 0; i--)
    {
        siftHeap(&arrHeap, i, arrHeap.size());
    }

    for (int i = 1; i < arrHeap.size(); i++)
    {
        int temp = arrHeap.at(0);
        arrHeap[0] = arrHeap.at(arrHeap.size() - i);
        arrHeap[arrHeap.size() - i] = temp;
        siftHeap(&arrHeap, 0, arrHeap.size() - i);
    }
    return 0;
}
