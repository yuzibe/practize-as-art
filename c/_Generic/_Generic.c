// _Generic.c
#include <stdlib.h>
#include <math.h>

// 定义一个可以传入不同类型的 get_abs 获取绝对值的函数.
// 类型匹配到 int -> abs(exp)
// 类型匹配到 double -> fabs(exp)
#define get_abs(exp)  _Generic(exp, int:abs, double:fabs)(exp)

int main() {
    int sub = -233;
    int res = get_abs(sub);
    double sub_double = -2.33;
    double res_double = get_abs(sub_double);
    return res + (int) res_double;
}