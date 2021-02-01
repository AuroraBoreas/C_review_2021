#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int Add(int a, int b);

int main()
{
    /*

    + REPL
        - read
        - evaluate
        - present
        - loop

    */

    // var
    {
        char c = 'a';
        short s = 32;
        int i = 42;
        long l = 1234L;
        float f = 3.14f;
        double d = 2.71828;

        printf("%c \n", c);
        printf("%d \n", s);
        printf("%d \n", i);
        printf("%ld \n", l);
        printf("%f \n", f);
        printf("%f \n", d);
    }

    // func
    {
        int a = 6;
        int b = 42;
        int res = Add(a, b);
        printf("%d", res);
    }

    // statement
    {

    }

    // control flow
    {
        int age = 30;
        if(age < 5)
        {
            printf("-> goto kindergarten..\n");
        }
        else if(age >= 5 && age < 15)
        {
            printf("-> goto middle school..\n");
        }
        else if(age >= 15 && age < 18)
        {
            printf("-> goto high school..\n");
        }
        else if(age >= 18 && age < 22)
        {
            printf("-> goto college..\n");
        }
        else
        {
            printf("-> do w/e u want..\n");
        }

    }

    // loop
    {
        for(int i=0; i<3; ++i)
        {
            printf("%d \n", i);
        }

        int m = 5;
        while(m > 0)
        {
            printf("%d \n", m);
            --m;
        }
    }

    // pointer
    {
        int a = 42;
        int* p = &a;

        printf("memory address of int a is : %x \n", p);
    }

    // reference
    {

    }

    // cls? (NO)
    {
        // c is a procedure language
        // no abstraction concept

    }

    return 0;
}

int Add(int a, int b)
{
    return a + b;
}
