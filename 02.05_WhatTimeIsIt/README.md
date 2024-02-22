[![LinkedIn][linkedin-shield]][linkedin-url-Bucsa]

# What Time Is It?

## Description 

This program allows the user to enter two separate times into the initial input. Then the program find the total minutes for each give time and finds the difference between the two in total minutes.

1. If I insert a condition for the minutes where if 
  
```bash
time_minutes =< 9, cout<<" ( "<<0.time_minutes<<")\\n"
```

1. I have all together 4 functions. First one allows the user to enter their first time in hours and minutes. The second one does the same but for the second time the user inputs. Both the these functions hold the initial values given. The third function converts the two times into units of minutes only. The final function takes the newly converted times, and subtracts them from one another. Upon this action, the program then displays the difference of the two times in minutes.
   
2. My reference argument in int main(min1, min2). It uses three functions to find "totalminutes1", "totalminutes2", and "time".
   
3. The informations brings with the initial input in hr1, min1, hr2, and min2. From there the two times are stored in "totalminutes1" and "totalminutes2". "Time" variable then holds both "totalminutes1" and "totalminutes2". The follow void statement converts the two times from hours and minutes to minutes only. The new times in minutes are stored in  "totalminutes1" and "totalminutes2", respectively. The last void statement now take the new times and calculate the difference of the two times and stores it under "time". The resulting solution  is displayed on the screen. 
   
4. By coding in a ``` srand(time(NULL)) ``` statement, the program can print a random message at the end of every run.
   
This program is written in C++.


[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url-Bucsa]: https://www.linkedin.com/in/justin-bucsa