<h1>C - Static Libraries</h1>

<b>What is a library?</b>
<p>A library is a file containing several object files, that can be used as a single entity in a linking phase of a program. </p>

<h4>Task 0:</h4>
Create the static library libmy.a containing all the functions listed below:
<pre>
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
</pre>

<h4>Task 1:</h4>
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
