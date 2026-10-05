//Name: Angelina Chen
//Date: Oct. 5, 2026
//Course:CIS-165
For diamond.cpp, the most important aspect of creating the matching diamond shape was the use of setw() function, as I didn't need to manually add the spaces into the quotation marks. In order to do that, I had to import <iomanip>, and honestly, I could've just used the spaces, but I wanted to implement something new that I learned. Additionally, in order to find the amount of spaces, I dragged the cursor to see how many spaces there were. However, alternatively, I could import <string> and count the length after copying and pasting the provided string.

In order to run diamond.cpp, you need to type g++ diamond.cpp -o diamond, then ./diamond

For game_time.cpp, I converted the provided minutes to hours by dividing by 60, as there are 60 minutes in an hour. I saved that into an hour variable, and then for the minute variable, I used %, which finds the remainder after being divided by a number. Therefore, I did %60, because I wanted to find the remainder of the total minutes provided, so i could find the remainder after being divided by 60. For lvl1, the time was 78 minutes, which when integer divided (Meaning not including any decimals or remainders), equaled 1, as the remainder 18 could not be divisible by 60. Then, using the remainder equation, I preserved the 18 remainder into a variable. The same process was done for lvl2. Then, in order to find the difference between the two times, I did 144-78, which equaled to 66 minutes total. When applying the same previous equations to this, the total difference was 1 hour and 6 minutes.


In order to run game_time.cpp, you need to type g++ game_time.cpp -o diamond, then ./game_time

The reason the assignment requests to have equations stored to a variable rather than the print is because it is easier to read and is more flexible. In case a factor needs to be changed, it will be easier to look for the variable that has a specific name, rather than having to look through various lines of code that all start with cout.

Program/test	Values or pattern checked	Expected result before running	            Actual output	Match or correction
diamond.cpp	      Seven required lines      7 lines of stars from 1->7->1 as a diamond  <-Output	    Match
game_time.cpp   assigned 78 and 144 minutes	1hr 18min, 2hr 24min, 1hr 6min	            Same	        Match
game_time.cpp     60 and 80	            	1hr,1hr 20 min, 0hr 20min	                Same        	Match