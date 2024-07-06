# Sparse Matrix Array Implementation


## Input and Output

### Test Case 1

**Input**:

Enter the number of rows: 4

Enter the number of columns: 4

Enter row index: 0

Enter column index: 1

Enter value: 5

Do you want to add another element? (y/n): y

Enter row index: 1

Enter column index: 2

Enter value: 8

Do you want to add another element? (y/n): y

Enter row index: 2

Enter column index: 3

Enter value: 12

Do you want to add another element? (y/n): y

Enter row index: 3

Enter column index: 0

Enter value: 15

Do you want to add another element? (y/n): n



**Output**:

Sparse Matrix:

0 5 0 0

0 0 8 0

0 0 0 12

15 0 0 0

### Test Case 2

**Input**:

Enter the number of rows: 3

Enter the number of columns: 3

Enter row index: 0

Enter column index: 0

Enter value: 7

Do you want to add another element? (y/n): y

Enter row index: 1

Enter column index: 1

Enter value: 0

Do you want to add another element? (y/n): y

Enter row index: 2

Enter column index: 2

Enter value: 3

Do you want to add another element? (y/n): n



**Output**:

Sparse Matrix:

7 0 0

0 0 0

0 0 3



## Description

This program allows you to create a sparse matrix by specifying the number of rows and columns. You can then input the indices and values of non-zero elements. The program will store these elements efficiently and print the resulting sparse matrix, filling in zero values for all other positions.Only non-zero values are stored internally to optimize space usage, and the matrix is printed in a dense format for readability.
