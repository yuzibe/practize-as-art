#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string S = "ASDFQWERGHJTYU";
    string T = "GHJ";
    int index = 0;
    int i = 0;
    int j = 0;
    while (i < S.length() && j < T.length())
    {
        if (S[i] == T[j])
        {
            i++;
            j++;
        }
        else
        {
            index++;
            i = index;
            j = 0;
        }
    }
    if (j == T.length())
    {
        cout << "匹配成功，位置：" << index << endl;
    }
    else
    {
        cout << "匹配失败" << endl;
    }
    return 0;
}
