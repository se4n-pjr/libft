*This project has been created as part of the 42 curriculum by jpoh.*

# Libft

## Description
**Libft** is a foundational project in the 42 curriculum. The goal of this project is to create a custom C standard library containing a collection of general-purpose utility functions. Since 42 students are restricted from using standard C library functions in future projects, `libft` serves as a personal repository of essential algorithms for memory management, string manipulation, type conversion, output operations, and linked list handling.

Recreating these standard functions deepens understanding of low-level memory layout, pointer manipulation, and dynamic memory allocation in C while enforcing strict coding standards (**The Norm**).

---

## Library Architecture & Function Details

The library is compiled into a static library (`libft.a`) and is categorized into several functional modules:

### 1. Libc Functions (Standard C Utilities)
- **Memory Operations**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **String Inspection & Manipulation**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- **Character Checks & Conversions**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

### 2. Additional Functions
- `ft_substr`: Extracts a substring from a string given a starting index and maximum length.
- `ft_strjoin`: Concatenates two strings into a newly allocated string.
- `ft_strtrim`: Trims specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings based on a specified delimiter character.
- `ft_itoa`: Converts an integer into a null-terminated ASCII string (handles signed values and edge cases like `INT_MIN`).
- `ft_strmapi`: Applies a function pointer to each character of a string to create a new string.
- `ft_striteri`: Applies a function pointer to each character of a string in-place.
- `ft_putchar_fd`: Outputs a character to a specified file descriptor.
- `ft_putstr_fd`: Outputs a string to a specified file descriptor.
- `ft_putendl_fd`: Outputs a string followed by a newline to a specified file descriptor.
- `ft_putnbr_fd`: Outputs an integer to a specified file descriptor.

### 3. Bonus Functions (Linked List Manipulation)
The bonus part introduces single linked lists managed via the `t_list` structure:
- `ft_lstnew`: Allocates and initializes a new list node.
- `ft_lstadd_front`: Inserts a node at the beginning of a list.
- `ft_lstsize`: Counts the number of nodes in a list.
- `ft_lstlast`: Retrieves the last node of a list.
- `ft_lstadd_back`: Appends a node to the end of a list.
- `ft_lstdelone`: Deletes and frees a single node's content and structure using a custom delete function.
- `ft_lstclear`: Deletes and frees an entire list and sets the head pointer to `NULL`.
- `ft_lstiter`: Iterates through a list and applies a function to each node's content.
- `ft_lstmap`: Iterates through a list, applies a function to each node, and builds a new list with the results.

---

## Instructions

### Prerequisites
- A UNIX-based operating system (Linux or macOS).
- `gcc` or `clang` compiler.
- `make` utility.

### Compilation & Installation
To build the static library `libft.a`:

```bash
git clone https://github.com/your-username/libft.git
cd libft
make
make bonus

Usage in Projects

To use libft in your own C project, include the header file and link the static library during compilation:

#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, 42!\n", 1);
    return (0);
}

Compile your program with libft.a:

Bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
Resources
References
Standard C Library Documentation: man7.org Linux manual pages for string.h, stdlib.h, and unistd.h.

C Programming Concepts: The C Programming Language (Kernighan & Ritchie) for standards on pointer arithmetic, dynamic memory allocation (malloc/free), and structure definitions.

AI Assistance Declaration
In accordance with 42 academic policies, AI tools were utilized during the development of this project for the following specific tasks:

-Code Optimization & Edge Case Analysis: Used to review logic for boundary edge cases (such as handling INT_MIN in ft_itoa and verifying NULL guard checks across linked list operations).

-Norminette & Style Verification: Used to verify C syntax rules (such as operator precedence in double pointer dereferencing and proper casting practices).

- Documentation: Assisting in structuring and generating this README.md file based on project specification requirements.
