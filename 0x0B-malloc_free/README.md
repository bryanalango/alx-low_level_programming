#0x0B-malloc_free

This directory will be handling memory management using malloc.
The specific questions are higlighted below.

Questions and Instructions

Question 0
0-create_array.c
- Write a function that creates an array of chars, and initializes it with a specific char.
- Prototype: char *create_array(unsigned int size, char c);
- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails

Question 1
1-strdup.c
- Write a function that returns a pointer to a newly allocated space in memory, 
which contains a copy of the string given as a parameter.
- Prototype: char *_strdup(char *str);
-The _strdup() function returns a pointer to a new string which is a duplicate of the string
str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
n success, the _strdup function returns a pointer to the duplicated string. It returns
NULL if insufficient memory was available

Question 2
2-str_concat.c
- Write a function that concatenates two strings.
- Prototype: char *str_concat(char *s1, char *s2);
- The returned pointer should point to a newly allocated space in memory which contains the
contents of s1, followed by the contents of s2, and null terminated
- if NULL is passed, treat it as an empty string
- he function should return NULL on failure

Question 3
3-alloc_grid.c
- Write a function that returns a pointer to a 2 dimensional array of integers.
- Prototype: int **alloc_grid(int width, int height);
- Each element of the grid should be initialized to 0
- The function should return NULL on failure
- If width or height is 0 or negative, return NULL

Question 4
4-free_grid.c
- Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
- Prototype: void free_grid(int **grid, int height);
- Note that we will compile with your alloc_grid.c file. Make sure it compiles.

Question 5
5-argstostr.c
- Write a function that concatenates all the arguments of your program.
- Returns NULL if ac == 0 or av == NULL
- Returns a pointer to a new string, or NULL if it fails
- Each argument should be followed by a \n in the new string

#Bryan Alang'o, ALX Cohort 0;
