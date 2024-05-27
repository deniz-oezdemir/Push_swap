# 42-Push_swap

## Summary
This program "push_swap" is designed to sort a stack of integers using a set of predefined operations. For comprehensive specifications and restrictions, please refer to the [subject](en.subject.pdf).
To ease your understanding of this subject, simplicity and brevity were prioritized over efficiency of operations. Nevertheless, at the time of evaluation (Jan 24, 2024), a grade of 96% was reached.

## Functionality
The program sorts a stack of integers in ascending order. It is restricted to two stacks, referred to as stack A and stack B. The stacks are implemented as linked lists; therefore, the terms "top of stack" and "head of list", as well as "bottom of stack" and "tail of list" are used interchangeably.

## Input
The input is a list of integers provided as arguments to the program.

## Operations
The program executes a set of operations to manipulate the stacks, including push (pa and pb), rotate (ra, rb), reverse rotate (rra, rrb), and swap (sa, sb).

## Sorting Algorithms
For smaller stacks (5 numbers or less), a simple sorting algorithm for each stack size is provided.

For larger stacks (6 numbers or more), a distribution sort algorithm (Skiena, 2021, pp. 137) is implemented. The following three functions do the heavy lifting:
1. **`assign_indexes`**
   - **Purpose:** Assigns indexes to the numbers in the list. This indexing simplifies achieving evenly distributed numbers per interval in below function `atob_interval`.
   - **Details:** The function iterates through the stack, finding the element with the highest value and assigns it an index equal to *stack_size - 1*. The element with the lowest value gets an index of 0.

2. **`atob_interval`**
   - **Purpose:** Moves nodes from stack A to stack B in intervals until stack A is empty.
   - **Details:** Divides stack A into intervals and pushes nodes with indexes falling within each interval to stack B. It also performs rotations on stack B to move the smaller half of the interval to the bottom of stack B. Resulting in stack B containing roughly sorted numbers in buckets, which are to be finally sorted by below function `btoa_max`.

3. **`btoa_max`**
   - **Purpose:** Moves the node with the largest index from stack B back to stack A until stack B is empty.
   - **Details:** Finds the element with the maximum index in stack B and determines whether it's more efficient to rotate stack B or reverse rotate it before pushing the element back to stack A. Thereby it sorts the numbers correctly in ascending order on stack A.

## Output:
The program's output is the sequence of operations needed to sort the provided numbers.

## Miscellaneous
* `ft_printf` has been added to libft.
* `custom_atoi` has been created to handle error cases of INT_MIN, INT_MAX, and non-digit inputs.

## Future Work
In order to achieve the highest grade of 100% another 300 operations must be saved for the case of sorting 500 numbers.

One approach to improve the function `atob_interval` might be to push the second biggest number before the maximum, then push the maximum, and finally perform a swap on stack A if this requires fewer moves than always simply pushing the maximum to A.

Another general approach might be to combine consecutive sa and sb, pa and pb, as well as rra and rrb operations to ss, rr, and rrr operations, repectively.

Also, a combination of the above-mentioned approaches might be successfull. If you find a simple way to improve the algorithm, please reach out to me.

## Sources
* Visual explanation of computational algorithms (great as a general introduction):
Bhargava, A.Y. (2016) *Grokking Algorithms: An illustrated guide for programmers and other curious people.* Shelter Island: Manning.
* Exhaustive explanation of sorting algorithms, complexity analysis, and exemplary C code (covers the above-mentioned distribution sort):
Skiena, S.S. (2021) *Algorithm Design Manual.* S.l.: Springer.

