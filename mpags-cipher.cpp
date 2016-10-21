#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

int main()
{

std::string msg {""};

// Take each letter from user input and in each case:

	//loop until the user presses Enter then Ctrl+D
	char in_char{'x'};
	while (std::cin >> in_char)
	{

		//    - Convert to upper case	
		if(isalpha(in_char))
		{
			msg += in_char;	
			in_char = toupper(in_char);
		}

		//    - Ignore any other (non-alpha) characters

		//    - Change numbers to words
		
		switch (in_char)
		{
			case '0':
				msg += "ZERO";
				break;
			case '1':
				msg += "ONE";
				break;
			case '2':
				msg += "TWO";
				break;
			case '3':
				msg += "THREE";
				break;
			case '4':
				msg += "FOUR";
				break;
			case '5':
				msg += "FIVE";
				break;
			case '6':
				msg += "SIX";
				break;
			case '7':
				msg += "SEVEN";
				break;
			case '8':
				msg += "EIGHT";
				break;
			case '9':
				msg += "NINE";
				break;
		}




		
	}

	std::cout << msg << std::endl;


//    - In each case, add result to a string variable
// print out the new string	


return 0;
}
