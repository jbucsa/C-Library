[![LinkedIn][linkedin-shield]][linkedin-url-Bucsa]


# Suffix Adder

## Description

This program allows the user to enter an integer value that the program will add the proper suffix to the given integer.

1. The last digit determine the suffix added to each number. Unless the number is 11, 12, and/or 13. For those three numbers, both the first and second digit matter because those integers are a special case when it comes to adding a suffix.
   
2. The special condition only happens with 11, 12, and 13.

3. By using if loops and coding ```bash n%10== ```, I can extract the important digit for adding a suffix.

4. All together I have three ```bash if ```, 3 ```bash else ```, and one ```bash else if ``` branches. Of which, my first "if" statement cascades to an "else if" and "else" branches. From there, the "else" branch cascades into an "if" and another "else" branch. Finally, this "else" branch cascades into my final "if" and "else" branches. 

5. To allow entering a "yes" or a "y" response, I would use a while loop that allows for cin to be both "yes" and "y".

6. By writing ```bash y=toupper(y) ``` after the ```bash cin>>y ``` statement, a user can type in either "y" or "Y" for a yes response. 

7. No, I only have branches in my code.

8. You need about 11 test. 4 for single digits to test each suffix. 3 for 11, 12, and 13 integers. Finally, 4  more test the integers with multiple digits to test each suffix.

9.  This is a great lab because the code itself needs to have some many special conditions that it gives great practice for using branches in coding.

10. We could had a more "else" branches that print responses before the actually suffix is given.
   
This program is written in C++.


[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url-Bucsa]: https://www.linkedin.com/in/justin-bucsa