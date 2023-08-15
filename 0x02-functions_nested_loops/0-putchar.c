#include <unistd.h>

int main() {
    const char str[] = "_putchar\n";
    write(1, str, sizeof(str) - 1);
    return 0;
}

