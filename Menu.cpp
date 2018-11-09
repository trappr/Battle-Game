/*********************************************************************
** Program name: Menu.cpp
** Author: Ryan Trapp
** Date: 10/22/2018
** Description: The following program calls methods from a class called Menu, defined
** in the header file "Menu.hpp". It contains a function that provides three options
** for the user to select and run."Mn"Mno"MN"
*********************************************************************/

//#include statements for iostream, string and limits library and header file
#include "Menu.hpp"

#include <iostream>
#include <limits>
#include <string>

Menu::Menu()
{

}

//The Menu select function prompts a user to pick any of three recursive functions to run, or quit the program.
//If a function is chosen the user is prompted to enter the parameters for each, with input validation to ensure
//proper input. The select function is then called recursively to prompt the user for another selection.
Character* Menu::select()
{

    std::cout << "Pick your character" << std::endl << std::endl;

    std::cout << "1. Barbarian" << std::endl;
    std::cout << "2. Vampire" << std::endl;
    std::cout << "3. Blue Men" << std::endl;
    std::cout << "4. Medusa" << std::endl;
    std::cout << "5. Harry Potter" << std::endl << std::endl;
    std::cout << "Please choose your preferred option: ";
    choice = intValidation();

    while (choice < 1 || choice > 5)
    {
        std::cout << std::endl << "Invalid input. Please enter a choice 1 - 5: ";
        choice = intValidation();
    }

    if (choice == 1)
    {
        Barbarian* p = new Barbarian();
        return p;
    }

    if (choice == 2)
    {

        Vampire* p = new Vampire();
        return p;
    }

    if (choice == 3)
    {

        BlueMen* p = new BlueMen();
        return p;
    }

    if (choice == 4)
    {

        Medusa* p = new Medusa();
        return p;
    }

    if (choice == 5)
    {

        HarryPotter* p = new HarryPotter();
        return p;
    }

    else
    {
        Character* p = new Character();
        return p;
    }

}

bool Menu::play()
{
    int selection;

    std::cout << std::endl << "Would you like to keep playing?" << std::endl << std::endl;

    std::cout << "1. Continue" << std::endl;
    std::cout << "2. Quit" << std::endl << std::endl;
    std::cout << "Please choose your preferred option: ";
    selection = intValidation();

    while (selection < 1 || selection > 2)
    {
        std::cout << std::endl << "Invalid input. Please enter either 1 or 2: ";
        selection = intValidation();
    }

    if (selection == 1)
    {
        return true;
    }

    else
    {
        std::cout << std::endl << "This program will now quit." << std::endl << std::endl;
        return false;
    }

}

//Validation function takes the input as a string variable and then uses a loop to parse through each character to determine
//if it is an integer. If so, it is sent to stoi function to turn it back to the correct int. If not, an error is shown and
//user is re-prompted to input value. This function is borrowed from Thomas Hart via the code sharing thread in Piazza.
int Menu::intValidation()
{
    bool isInt = true;
	std::string input;
	std::getline(std::cin, input);
    //for loop to iterate through each character to check for int
	for(unsigned int i = 0; i < input.size(); i++)
	{
		if(!(isdigit(input.at(i))))
			isInt = false;
	}
    //if a character that is not an int is found an error is presented and the user is re-prompted
	while(!isInt)
	{
		std::cout << "Invalid input. Only numbers can be accepted. Please choose a new selection: ";
		std::getline(std::cin, input);
		//reset bool to true for default case
		isInt = true;
		//check user input
		for(unsigned int i = 0; i < input.size(); i++)
		{
			if(!(isdigit(input.at(i))))
				isInt = false;
		}
	}
	//use stoi to return int variable value
	return stoi(input);
}

Menu::~Menu()
{
    //destructor
}
