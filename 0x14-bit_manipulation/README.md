# Bit Manipulation Tasks

This repository contains C programs that implement various bit manipulation tasks. Each task focuses on different aspects of working with binary representations of numbers and manipulating individual bits.

## Task 0: `0-binary_to_uint.c`
- Function: `unsigned int binary_to_uint(const char *b)`
- Description: Converts a binary string to an unsigned int. Returns 0 for invalid input (non-'0'/'1' or NULL).

## Task 1: `1-print_binary.c`
- Function: `void print_binary(unsigned long int n)`
- Description: Prints the binary representation of an unsigned long int number without using arrays, malloc, or % or / operators.

## Task 2: `2-get_bit.c`
- Function: `int get_bit(unsigned long int n, unsigned int index)`
- Description: Returns the value of the bit at a specified index in an unsigned long int number. Returns -1 for an out-of-range index.

## Task 3: `3-set_bit.c`
- Function: `int set_bit(unsigned long int *n, unsigned int index)`
- Description: Sets the value of a bit to 1 at a specified index in an unsigned long int number. Returns 1 for success, -1 for an error.

## Task 4: `4-clear_bit.c`
- Function: `int clear_bit(unsigned long int *n, unsigned int index)`
- Description: Sets the value of a bit to 0 at a specified index in an unsigned long int number. Returns 1 for success, -1 for an error.

## Task 5: `5-flip_bits.c`
- Function: `unsigned int flip_bits(unsigned long int n, unsigned long int m)`
- Description: Calculates the number of bits that need to be flipped to transform one unsigned long int number into another, without using % or / operators.

---

Feel free to explore the individual task files for more details on their implementation.

