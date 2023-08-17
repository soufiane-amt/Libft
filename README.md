# Libft

libft Project Documentation
This project involves creating my very own library, libft, which is a collection of functions that will be a useful tool for my programming curriculum. The library contains a set of standard C library functions (libc functions) as well as additional functions to manipulate strings and lists.

My project must be written in C.

Functions should not quit unexpectedly (segmentation fault, bus error, double free, etc).
Properly free all heap allocated memory.
Include a Makefile for compilation with flags -Wall, -Wextra, and -Werror.
My Makefile should contain rules for $(NAME), all, clean, fclean, and re.


Mandatory Part
Part 1 - Libc Functions
  You are required to implement various libc functions, prefixing them with ft_. The functions and their prototypes include:

-isalpha
-isdigit
-isalnum
-isascii
... (and more)

For functions that involve memory allocation, use malloc():

-calloc
-strdup

Part 2 - Additional Functions
In this part, you'll implement several string manipulation functions. Functions include:

-ft_substr
-ft_strjoin
-ft_strtrim
-... (and more)

Bonus Part
This section involves working with linked lists using the t_list structure. You'll implement functions to create, manipulate, and iterate through linked lists.

Bonus Functions
ft_lstnew
ft_lstadd_front
ft_lstsize
... (and more)
