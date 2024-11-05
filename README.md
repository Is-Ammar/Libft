# Libft Project

## Overview

The Libft project is a foundational C library that implements various utility functions. This library serves as a building block for other projects, providing essential string manipulation, memory management, and linked list functions.

## Files Included

This library consists of the following source files:

- **String Functions:**
  - `ft_atoi.c`: Converts a string to an integer.
  - `ft_isalpha.c`: Checks if a character is an alphabetic letter.
  - `ft_isalnum.c`: Checks if a character is alphanumeric.
  - `ft_isascii.c`: Checks if a character is an ASCII character.
  - `ft_isdigit.c`: Checks if a character is a digit.
  - `ft_isprint.c`: Checks if a character is printable.
  - `ft_strchr.c`: Locates a character in a string.
  - `ft_strlcat.c`: Appends a string to another with size limit.
  - `ft_strlcpy.c`: Copies a string with size limit.
  - `ft_strmapi.c`: Applies a function to each character of a string.
  - `ft_strdup.c`: Duplicates a string.
  - `ft_strtrim.c`: Trims characters from the start and end of a string.
  - `ft_substr.c`: Extracts a substring from a string.
  - `ft_strjoin.c`: Concatenates two strings.
  - `ft_striteri.c`: Applies a function to each character of a string with index.
  - `ft_strlen.c`: Returns the length of a string.
  - `ft_strnstr.c`: Locates a substring within a string.
  - `ft_strrchr.c`: Locates the last occurrence of a character in a string.
  - `ft_strncmp.c`: Compares two strings up to a specified length.

- **Memory Functions:**
  - `ft_bzero.c`: Sets a block of memory to zero.
  - `ft_calloc.c`: Allocates memory and initializes it to zero.
  - `ft_memchr.c`: Locates a character in a block of memory.
  - `ft_memcmp.c`: Compares two blocks of memory.
  - `ft_memcpy.c`: Copies memory from one location to another.
  - `ft_memmove.c`: Moves memory from one location to another safely.
  - `ft_memset.c`: Sets a block of memory to a specified value.

- **Linked List Functions (Bonus):**
  - `ft_lstnew_bonus.c`: Creates a new linked list node.
  - `ft_lstadd_front_bonus.c`: Adds a node to the front of a linked list.
  - `ft_lstadd_back_bonus.c`: Adds a node to the back of a linked list.
  - `ft_lstiter_bonus.c`: Iterates over a linked list and applies a function to each node.
  - `ft_lstmap_bonus.c`: Applies a function to each node of a list and creates a new list.
  - `ft_lstsize_bonus.c`: Returns the size of a linked list.
  - `ft_lstlast_bonus.c`: Returns the last node of a linked list.
  - `ft_lstclear_bonus.c`: Clears and frees a linked list.
  - `ft_lstdelone_bonus.c`: Deletes a node from a linked list.

- **Output Functions:**
  - `ft_putchar_fd.c`: Writes a character to a file descriptor.
  - `ft_putstr_fd.c`: Writes a string to a file descriptor.
  - `ft_putendl_fd.c`: Writes a string followed by a newline to a file descriptor.
  - `ft_putnbr_fd.c`: Writes an integer to a file descriptor.

- **Other Functions:**
  - `ft_itoa.c`: Converts an integer to a string.
  - `ft_tolower.c`: Converts a character to lowercase.
  - `ft_toupper.c`: Converts a character to uppercase.
  - `ft_split.c`: Splits a string into an array of strings based on a delimiter.

## Makefile

The Makefile provided allows you to compile the library easily. To create the library, simply run:

```bash
make
