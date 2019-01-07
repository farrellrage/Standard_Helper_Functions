//------------------------------------------------------------------------------
//Programmer:		Austin M Farrell
//Function Definitions:
//	PrintDividerToConsole
//  PrintDivider
//  PrintCenteredMessage
//------------------------------------------------------------------------------

#include "StandardHelperFunctions.h"

//------------------------------------------------------------------------------
//PrintDividerToConsole: Outputs a divider line to the console
//------------------------------------------------------------------------------
void PrintDividerToConsole(int length, char character)
{
	// Output a divider line to the console
	cout << setw(length) << setfill(character) << character << setfill(' ')
		<< endl;
} // !PrintDividerToConsole

//------------------------------------------------------------------------------
//PrintDivider: Outputs a divider line to a designated location
//------------------------------------------------------------------------------
void PrintDivider(ostream& fout, int length, char character)
{
	// Output a divider line to the specified destination
	fout << setw(length) << setfill(character) << character << setfill(' ')
		<< endl;
} // !PrintDivider

//------------------------------------------------------------------------------
//PrintCenteredMessage: Outputs a centered message to a designated location
//------------------------------------------------------------------------------
void PrintCenteredMessage(ostream& fout, string message, int centerWidth)
{
	int centerOfScreen;

	// Calculate the center of the screen for the message
	centerOfScreen = static_cast<int>((centerWidth + message.length()) / 2);

	// Output the centered message to the specified destination
	fout << right << setw(centerOfScreen) << message << endl;
} // !PrintCenteredMessage