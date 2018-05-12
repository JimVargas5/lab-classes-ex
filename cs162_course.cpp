//Include your name, course, and information about the code
//implemented in this file.

#include "cs162_course.h"

//Implement the body of these functions for Lab #6

//Constructor - initialize all data members to their zero equivalent value
course::course()
{
	//Place the code for the constructor here
    first_name[0] = '\0';
    last_name[0] = '\0';
    courseDesig[0] = '\0';
    crn = 0;
    section = 0;
}


//Read in the CRN, Course Description and Section
//Store these into the private data members of the class
void course::read_course()
{
        //Implement this function
        cout << "Enter the course designator\n";
        cin.get(courseDesig, SIZE, '\n');
        cin.ignore(1000,'\n');

        cout << "Enter the course section number\n";
        cin >> section;
        cin.ignore(1000, '\n');

        cout << "Enter the CRN\n";
        cin >> crn;
        cin.ignore(1000,'\n');
}


//Display the name and course information
void course::display()
{
    display_name();

    cout << "Class:\n" << crn << " " << courseDesig << " " << section << endl;
}

//Take the argument and compare it to the student's name
//If it is the same, return a true - otherwise return false
bool course::is_match(char a_first_name[], char a_last_name[])
{
    if (!strcmp(a_first_name, first_name))
    {
        cout << "\nalmost..\n";
        if (!strcmp(a_last_name, last_name))
        {
            cout << a_first_name << " Match\n";
            return true;
        }
    }
    cout << a_first_name << " No match\n";
    return false;
}


//Reset the course information for a student if they
//want to drop, given the CRN. Only drop the course if the CRN
//matches. Return true if the operation was successful and false
//if the CRN doesn't match
bool course::drop(int CRN)
{
    if (CRN == crn)
    {
        cout << courseDesig << " dropped\n";

        courseDesig[0] = '\0';
        section = 0;
        crn = 0;
        return true;
    }
    cout << "no drop\n";
    return false;
}





