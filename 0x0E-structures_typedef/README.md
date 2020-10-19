#0x0E-structures_typedef

dog.h
<hr>
Define a new type struct dog with the following elements:<br>
<ul>
<li>name, type = char * </li>
<li>age, type = float </li>
<li>owner, type = char * </li>
</ul>

1-init_dog.c
<hr>
Write a function that initialize a variable of type struct dog<br>
<ul>
<li>Write a function that initialize a variable of type struct dog</li>
<li>Prototype: void init_dog(struct dog *d, char * name, float age, char *owner);</li>
</ul>

2-print_dog.c
<hr>
Write a function that prints a struct dog<br>
<ul>
<li>Prototype: void print_dog(struct dog * d);</li>
<li>You are allowed to use the standard library</li>
<li>f an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))</li>
<li>If d is NULL print nothing.</li>
</ul>

dog.h
<hr>
<ul>
<li>Define a new type dog_t as a new name for the type struct dog</li>
</ul>

4-new_dog.c
<hr>
<ul>
<li>Write a function that creates a new dog.</li>
<li>Prototype: dog_t *new_dog(char *name, float age, char * owner);</li>
</li>You have to store a copy of name and owner</li>
<li>Return NULL if the function fails</li>
</ul>

5-free_dog.c
<hr>
<ul>
<li>Write a function that frees dogs.</li>
<li>Prototype: void free_dog(dog_t * d);</li>
</ul>
