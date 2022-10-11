<h1>C - Preprocessor</h1>

<h4>Task 0:</h4><a href="https://github.com/ClemsNzube/alx-low_level_programming/blob/master/0x0D-preprocessor/0-object_like_macro.h">0-object_like_macro.h</a>
<p>Create a header file that defines a macro named SIZE as an abbreviation for the token
</p>
<pre>julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ </pre>

<h4>Task 1:</h4>
<p><a href="https://github.com/ClemsNzube/alx-low_level_programming/blob/master/0x0D-preprocessor/1-pi.h">1-pi.h</a></p>
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

<pre>julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$ </pre>

<h4>Task 2:</h4>
<p><a href="https://github.com/ClemsNzube/alx-low_level_programming/blob/master/0x0D-preprocessor/2-main.c">2-main.c</a></p>
Write a program that prints the name of the file it was compiled from, followed by a new line.

You are allowed to use the standard library

<h4>Task 3:</h4>
<p><a href="https://github.com/ClemsNzube/alx-low_level_programming/blob/master/0x0D-preprocessor/3-function_like_macro.h">3-function_like_macro.h</a></p>
Write a function-like macro ABS(x) that computes the absolute value of a number x.
<pre>julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ </pre>

<h4>Task 4:</h4>
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
<pre>0.0%)
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ </pre>
