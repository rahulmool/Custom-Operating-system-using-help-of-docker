#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    int i,n;
    for(i=0;i<5;i++)
    print_str("Welcome to our 64-bit kernel!\n");
}