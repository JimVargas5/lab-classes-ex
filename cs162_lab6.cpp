//Put your header comments here with your name, class
//and purpose of the program

#include "cs162_course.h"





int main()
{

    //Step #4 - Create an object of the class here:

    course c;
    c.read_name();
    c.display_name();

    //Steps #5-10 - Call the member functions here:
    c.read_course();
    c.display();
    
    char jim[] = "Jim";
    char vargas[] = "Vargas";
    char poop[] = "poop";

    bool test1 = c.is_match(jim, vargas);
    bool test2 = c.is_match(poop, vargas);

    bool dropTest = c.drop(5);

    return 0;
}
