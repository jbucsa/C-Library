[![LinkedIn][linkedin-shield]][linkedin-url-Bucsa]

# Matrix Program

## Description 

This programs allows a user to do matrix multiplication between two matrixes. The user is able to enter the size of each matrix and the integer values within each matrix. The problem will give an invalid responds if the two matrixes are unable to be multiplied by one another as inputted by the user.

1. To test force  the user to enter valid dimensions I can use 
```bash i if(!cin)\{```
```bash \i0 ``` to be given with an invalid input that exceeds the matrix size limit and the ability to be multiply the two matrices.

2.  Yes, my code can read the matrix sizes row by row and long as the user press enter once each roll is complete and there are spaces separating each integer value.
   
3. A user can simply just enter each case into the program for each of the 4 cases to see which situation is valid and which is not. With that being said, for the cases of multiplying f*f and s*s, the program will always give a valid answer because these cases are always mathematically true.

4. If a user is able to input both of the matrixes without receiving an error message, it is impossible that the resulting matrix from the multiplication will be greater than the maximum possible dimensions allowed.
   
5. Matrix multiplication works by multiplying the first row of the first matrix by the first column of the second matrix. This will give the solution the first position in the resulting matrix. This is repeated for each row of the first matrix and each column of the second matrix. But one can not switch the order of the two matrices and assume the answer will be the same. Order matters in matrix multiplication, unlike numerical multiplication.
   
6. 3 loops will be needed. 2 loops to do the multiplication and 1 to rearrange the order of the resulting position of the transverse matrix.
   
7.  Yes, by using two for loops in the final statement for the 
```bash \i cout ```
```bash \i0 ``` , the program can display the resulting matrix values, row by row.

1. You only really need to use two answer matrices. Since the matrix multiplication of two matrices of the same values will give a matrix that works in my program, its trivial to even solve for such a solution, which is 2 of the possible answer matrices. Only testing two matrix is different row and/or column values will actually test the ability of the program. 
   
This program is written in C++.


[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url-Bucsa]: https://www.linkedin.com/in/justin-bucsa