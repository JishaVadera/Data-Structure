#include<stdio.h>
int main()
{
    int a = 10;
    printf("a is: %d\n a is: %d\n", a,a++);
    printf("a is: %d\n a is: %d\n", a,++a);
    printf("a is: %d\n a is: %d\n", a++,a++);
    printf("a is: %d\n a is: %d\n", a++,++a);
    printf("a is: %d\n a is: %d\n", ++a,++a);
    printf("a is: %d\n a is: %d\n a is: %d\n", a,a++,a++);
    printf("a is: %d\n a is: %d\n a is: %d\n", a,++a,a++);
    printf("a is: %d\n a is: %d\n a is: %d\n", a++,++a,a++);
    printf("a is: %d\n a is: %d\n a is: %d\n", a++,++a,++a);
    printf("a is: %d\n a is: %d\n a is: %d\n", ++a,++a,++a);
    printf("a is: %d\n a is: %d\n a is: %d\n", ++a,++a,a++);
    printf("a is: %d\n a is: %d\n a is: %d\n", a++,++a,a++);
    printf("a is: %d\n a is: %d\n a is: %d\n", a++,++a,a++);
    printf("a is: %d\n a is: %d\n a is: %d\n", ++a,a++,++a);
    printf("a is: %d\n a is: %d\n a is: %d\n a is: %d\n", a++,++a,a++,++a);
}
/*
two array merged:
10 20 30 40 50 => 50 20 30 40 10
10 20 30 40 50 => 20 30 40 50 10
*/