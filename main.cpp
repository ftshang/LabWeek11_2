#include <iostream>
#include <map>
#include <string>

int main() 
{
    std::string userInput;
    std::map<std::string, int> roomNum;

    roomNum["CS101"] = 3004;
    roomNum["CS102"] = 4501;
    roomNum["CS103"] = 6755;
    roomNum["NT110"] = 1244;
    roomNum["CM241"] = 1411;

    std::map<std::string, std::string> instructors;

    instructors["CS101"] = "Haynes";
    instructors["CS102"] = "Alvarado";
    instructors["CS103"] = "Rich";
    instructors["NT110"] = "Burke";
    instructors["CM241"] = "Lee";

    std::map<std::string, std::string> meetingTimes;

    meetingTimes["CS101"] = "8:00 am";
    meetingTimes["CS102"] = "9:00 am";
    meetingTimes["CS103"] = "10:00 am";
    meetingTimes["NT110"] = "11:00 am";
    meetingTimes["CM241"] = "1:00 pm";

    std::cout << "Please enter a course number: ";
    getline(std::cin, userInput);

    std::map<std::string, int>::iterator iter1;
    std::map<std::string, std::string>::iterator iter2;
    std::map<std::string, std::string>::iterator iter3;

    iter1 = roomNum.find(userInput);
    if (iter1 != roomNum.end())
    {
        iter2 = instructors.find(userInput);
        iter3 = meetingTimes.find(userInput);

        std::cout << "Course: " << iter1->first << std::endl;
        std::cout << "Room Number: " << iter1->second << std::endl;
        std::cout << "Instructor: " << iter2->second << std::endl;
        std::cout << "Meeting Time: " << iter3->second << std::endl; 
    }
    else
    {
        std::cout << userInput << " was not found." << std::endl;
    }
    return 0;
} 