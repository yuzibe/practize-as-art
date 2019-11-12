# 类型推导

- 类型推导  
类似于 Java11 的 var

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