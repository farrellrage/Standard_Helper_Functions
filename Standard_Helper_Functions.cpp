//------------------------------------------------------------------------------
//Programmer:		Austin M Farrell
//Function Definitions:
//	PrintDividerToConsole
//  PrintDivider
//  PrintCenteredMessage
//	Max
//	Min
//------------------------------------------------------------------------------

#include "Standard_Helper_Functions.h"

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

//------------------------------------------------------------------------------
//Max: If a is greater than b then return a, else return b
//--------------------------------------
//	a:
//		First value that will be compared
//	b:
//		Second value that will be compared
//------------------------------------------------------------------------------
int Max(int a, int b)
{
	return (a > b) ? a : b;
} // !Max

//------------------------------------------------------------------------------
//Min: If a is less than b then return a, else return b
//--------------------------------------
//	a:
//		First value that will be compared
//	b:
//		Second value that will be compared
//------------------------------------------------------------------------------
int Min (int a, int b)
{
	return (a < b) ? a : b;
} // !Min