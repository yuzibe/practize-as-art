// static_assert.c
#include <assert.h>
#include <stdbool.h>

int main() {
    static_assert(true, "assert success");
    static_assert(false, "assert failure");
    return 0;
}