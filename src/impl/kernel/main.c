#include "print.h"

void kernel_main() {
    int i,j,k,n;
    char str[100];
    char helloWorld[] = "hello world";
    char target[50];
    str[0]='*';
    str[1]='*';
    str[2]='*';
    str[3]='\0';
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to our 64-bit kernel!");
    
    target[0]=0;
    target[1]='\0';

    for (i = 0; i < 11; i++) {
        for (j = 0; j <= helloWorld[i]; j++) {
        	target[i]=j;
            print_str(target);
            print_str("\n");
            for(k=0;k<10000000;k++);
            //printf("%s\n",target);
        }
        
        target[i+1]=0;
        target[i+2]='\0';
    }
}