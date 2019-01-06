//------------------------------------------------------------------------------
//Programmer:		Austin M Farrell
//Associated file:  StandardHelperFunctions.h
//Function Definitions:
//		PrintDividerToConsole
//      PrintDivider
//      PrintCenteredMessage
//		PrintArrayToConsole
//------------------------------------------------------------------------------
#ifndef StandardHelperFunctions_h
#define StandardHelperFunctions_h

#include "Standards.h"

void PrintDividerToConsole(int length, char character);

void PrintDivider(ostream& fout, int length, char character);

void PrintCenteredMessage(ostream& fout, string message, int centerWidth);

//------------------------------------------------------------------------------
//PrintArrayToConsole: Outputs the contents of the given array to the console
//------------------------------------------------------------------------------
template <typename type>
void PrintArrayToConsole(type data[], int length)
{
	//Determine whether the array is empty
	if (length == 0)
	{
		//Output error message to the console
		PrintDividerToConsole(DIVIDER_WIDTH, ERROR_DIVIDER_CHAR);
		PrintCenteredMessage(cout, "Error - empty array", DIVIDER_WIDTH);
		PrintDividerToConsole(DIVIDER_WIDTH, ERROR_DIVIDER_CHAR);
	} // !if
	else
	{
		//For each element in the array
		for (int index = 0; index < length; index++)
		{
			//Output the current element to the console
			cout << data[index] << endl;
		} // !for
	} // !else
} // !PrintArrayToConsole

#endif // !StandardHelperFunctions_h