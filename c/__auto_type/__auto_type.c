// __auto_type.c
#define var __auto_type

int main() {
    var auto_arr = (int[]) {1, 2, 3, 4};
    var p = auto_arr;
    return sizeof(p);
}