//Name: Angelina Chen
//Date: Oct. 5, 2026
//Course:CIS-165
//Description: Converting time in minutes for level 1 and 2, and converting them into hours+minutes. Additionally, finding the difference between level 2 and level 1 in the form of the hour+minute format.

#include<iostream>
using namespace std;

int main(){

    int lvl1_time = 78; //Using the provided numbers... changed to 60 when testing
    int lvl2_time = 144; //Using the provided numbers... changed to 80 when testing

    int hour = lvl1_time/60; // Captures the hour
    int minute = lvl1_time%60; //Captures the remainder, which finds minutes
    cout << "The first level took: " << hour << " hours and " << minute << " minutes" << endl;

    hour = lvl2_time/60;
    minute = lvl2_time%60;
    cout << "The second level took: " << hour << " hours and " << minute << " minutes" << endl;

    int difference_hour = (lvl2_time-lvl1_time)/60; //Finding the difference between lvl2 and lvl1, which is then converted to hours
    int difference_minute = (lvl2_time-lvl1_time)%60; //Finding the difference between lvl2 and lvl1, which is then put to find remaining minutes
    cout << "Level 2 took " << difference_hour << " hours and " << difference_minute << " minutes more than level 1" << endl;


  
  
}