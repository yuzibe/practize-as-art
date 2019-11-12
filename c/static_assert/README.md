# 静态断言

- 静态断言  
编译前检查, 并输出相应提示.

``` c
// static_assert.c
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int main() {
    static_assert(true, "assert success");
    static_assert(false, "assert failure");
    return 0;
}
```