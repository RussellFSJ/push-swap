_This project has been created as part of the 42 curriculum by rfoo._

# Push_swap

## Description
The `Push swap` project is a simple yet highly structured algorithmic challenge: you need to sort data. We are to start with 2 stacks `a` and `b`. Stack `a` contains a random number of unique negative and/or positive integers and stack `b` is empty. 

### Operations
Below is the list of operations that we need to build for `push_swap` to work. 

| Operation | Description |
|-----------|-------------|
| sa | Swap the first 2 elements at the top of stack **a**. Do nothing if there is only one element or none. |
| sb | Swap the first 2 elements at the top of stack **b**. Do nothing if there is only one element or none. |
| ss | Perform **sa** and **sb** at the same time. |
| pa | Take the first element at the top of **b** and put it at the top of **a**. Do nothing if **b** is empty. |
| pb | Take the first element at the top of **a** and put it at the top of **b**. Do nothing if **a** is empty. |
| ra | Shift up all elements of stack **a** by 1. The first element becomes the last one. |
| rb | Shift up all elements of stack **b** by 1. The first element becomes the last one. |
| rr | Perform **ra** and **rb** at the same time. |
| rra | Shift down all elements of stack **a** by 1. The last element becomes the first one. |
| rrb | Shift down all elements of stack **b** by 1. The last element becomes the first one. |
| rrr | Perform **rra** and **rrb** at the same time. |

### Radix Sort
`Radix sort` is a non‑comparative sorting algorithm that works by grouping numbers according to their digits or bits. In `push_swap`, it’s typically implemented in binary form:

- Bitwise passes: Each number is examined bit by bit (starting from the least significant bit).

- Push/rotate operations:

	- If the current bit is 0, push the number to stack B (`pb`).

	- If the bit is 1, rotate stack A (`ra`).

- Rebuild stack A: After each pass, all elements in stack B are pushed back to stack A (`pa`).

- Repeat: Continue for each bit until all numbers are sorted.

This method ensures that the stack is sorted in ascending order after processing all bits. It’s efficient because it runs in `O(n × k)` time, where n is the number of elements and k is the number of bits needed to represent the largest number.

`Radix sort` is less efficient when the stack size is 5 or less, therefoe we will be sorting those stacks manually using our operations. 

## Instructions

To compile the program, run:

```
make
```
This compiles the program as an executable `push_swap`.

To use:

```
./push_swap "<n no. of args>"

OR

./push_swap <arg 1> <arg 2> ... <arg n> 
```

### Examples
Some examples you can try to test:
```
./push_swap "9 8 7 6 5 4 3 2 1"

OR

./push_swap 9 8 7 6 5 4 3 2 1

OR

export ARG=$(shuf -i 1-500 -n 5 | xargs)
./push_swap $ARG
```
## Resources

- [Libft](https://github.com/RussellFSJ/libft)
- [Radix Sort | GeeksforGeeks](https://www.youtube.com/watch?v=nu4gDuFabIM)
