#include <iostream>
#include <string>
#include <cctype>
#include <vector>

int main(int argc, char* argv[])
{
	//Convert command line arguments 
	std::vector<std::string> cmdLineArgs { argv, argv+argc };

	// Process the command line arguments
	int i = cmdLineArgs.size();
	for ( int j {0}; j<i ; j++ )
	{	
		// TEL: There is a rule of thumb that each bit of code should do one job.
		//      The job of this loop is to process the command line arguments and determine the setup for the program.
		//      The actions should occur afterwards.
		//      e.g. it is best to separate the action of printing the help message from determining that help is required.
		//      See the model solution.

		//If help is asked for, give it
		if (cmdLineArgs[j] == "-h" || cmdLineArgs[j] == "--help")
		{
			// TEL: This could be a more helpful message!
			std::string help {"This is help\n"};
			std::cout << help << std::endl;
			return 0;
		}

		//give version details
		else if (cmdLineArgs[j] == "--version")
		{
			std::string version {"Version 1.0"};
			std::cout << version << std::endl;
			return 0;
		}	

		//give input file
		else if (cmdLineArgs[j] == "-i")
		{	

			//error if no input file
			if (j+1 == i)
			{	
				// print error message and return 1 to indicate failure
				std::cout << "ERROR: no input file defined" << std::endl;
				return 1;
			}

			// TEL: would be better to define this string outside the loop so that we can use the variable later on
			//      also would suggest to use = rather than += in this case since you are assigning rather than appending
			std::string inputfile {""};
			inputfile += cmdLineArgs[j+1];
			std::cout << "Input file saves as variable inputfile" << std::endl;

		}

		//output file
		else if (cmdLineArgs[j] == "-o")
		{

			//error if not output file
			if (j+1 == i)
			{	
				// print error message and return 1 to indicate failure
				std::cout << "ERROR: no output file defined" << std::endl;
				return 1;
			}


			// TEL: would be better to define this string outside the loop so that we can use the variable later on
			//      also would suggest to use = rather than += in this case since you are assigning rather than appending
			std::string outputfile {""};
			outputfile += cmdLineArgs[j+1];
			std::cout << "Output file saves as variable outputfile" << std::endl;

		}


		// TEL: looks like bit of debugging printout left in
		std::cout << cmdLineArgs[j] << std::endl;
	}
	std::string msg {""};

	std::cout  << "Type cipher text, press Enter then Ctrl+D when finished" << std::endl; 

	// Take each letter from user input and in each case:

	//loop until the user presses Enter then Ctrl+D
	char in_char{'x'};
	while (std::cin >> in_char)
	{

		//    - Convert to upper case	
		if(isalpha(in_char))
		{
			in_char = toupper(in_char);
			msg += in_char;	

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
