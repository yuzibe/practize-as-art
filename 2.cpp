#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    array<int, 10> intArray{0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // for (int i = 0; i < intArray.size(); i++)
    // {
    //     cin >> intArray[i];
    // }
    // select sort]
    for (int i = 0; i < intArray.size() - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < intArray.size(); j++)
        {
            if (intArray.at(index) > intArray.at(j))
            {
                index = j;
            }
        }
        if (index != i)
        {
            int temp = intArray[i];
            intArray[i] = intArray[index];
            intArray[index] = temp;
        }
    }
    // bubble sort
    for (int i = 0; i < intArray.size() - 1; i++)
    {
        for (int j = 0; j < intArray.size() - i - 1; j++)
        {
            if (intArray.at(j) > intArray.at(j + 1))
            {
                int temp = intArray[j];
                intArray[j] = intArray[j + 1];
                intArray[j + 1] = temp;
            }
        }
    }
    cout << "排序好的数组为：";
    for (int i = 0; i < intArray.size(); i++)
    {
        cout << intArray.at(i) << " ";
    }
    return 0;
}
