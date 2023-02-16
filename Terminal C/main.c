#include <stdio.h>		// Include the standard input/output header file
#include <stdlib.h>		// Include the standard library header file
#include <string.h>		// Include the string header file
#include <windows.h>		// Include the Windows API header file
#include <stdbool.h>		// Include the boolean data type header file
#include <conio.h>		// Include the console input/output header file

#define MAX_COMMAND_LENGTH 256	// Define the maximum length of a command
#define MAX_PATH_LENGTH 512	// Define the maximum length of a file path
#define VALID_COMMANDS "dir\nhelp\nexit\n"	// Define a list of valid commands
  
int main () {
  
char command[MAX_COMMAND_LENGTH];	// Create an array to store the command entered by the user
  char path[MAX_PATH_LENGTH];	// Create an array to store the current directory path
  char last_commands[10][MAX_COMMAND_LENGTH] = { 0 };	// Create a 2D array to store the last 10 commands entered by the user
  int num_commands = 0;		// Initialize a variable to keep track of the number of commands entered by the user
  bool input_error;		// Create a boolean variable to keep track of whether an error occurred during input processing
  
while (1)
    {				// Start an infinite loop
      printf ("Enter a command: ");	// Prompt the user to enter a command
      fgets (command, MAX_COMMAND_LENGTH, stdin);	// Read the user's input and store it in the command array
      command[strcspn (command, "\n")] = 0;	// Remove any newline characters from the command array
      input_error = false;	// Set the input error flag to false
      
if (strlen (command) == 0)
	{			// If the command is empty, skip to the next iteration of the loop
	  continue;
	
}
      
 
if (num_commands < 10)
	{			// If fewer than 10 commands have been entered, add the current command to the list of last commands
	  strcpy (last_commands[num_commands], command);
	  
num_commands++;
	
}
      else
	{			// Otherwise, shift the previous commands down by one and add the current command to the end of the list
	  for (int i = 0; i < 9; i++)
	    {
	      
strcpy (last_commands[i], last_commands[i + 1]);
	    
} 
strcpy (last_commands[9], command);
      
} 
 
if (strcmp (command, "exit") == 0)
	{			// If the user enters "exit", break out of the loop and end the program
	  break;
	
}
      else if (strcmp (command, "help") == 0)
	{			// If the user enters "help", display a list of valid commands
	  printf ("Valid commands: %s\n", VALID_COMMANDS);
	
}
      else if (strcmp (command, "dir") == 0)
	{			// If the user enters "dir", get the current directory path and display the contents of the directory
	  if (!GetCurrentDirectory (MAX_PATH_LENGTH, path))
	    {			// Try to get the current directory path and store it in the path array
	      printf ("Error getting current directory\n");	// If there's an error getting the directory path, print an error message
	      input_error = true;	// Set the input error flag to true
	    }
	  else
	    {			// Otherwise, if the directory path was successfully retrieved:
	      system (command);	// Run the "dir" command, which displays the contents of the directory
	    }
	
}
      else
	{			// If the user enters an invalid command:
	  printf ("Invalid command\n");	// Print an error message
	  input_error = true;	// Set the input error flag to true
	}
      
 
if (input_error)
	{			// If an error occurred during input processing:
	  continue;		// Skip to the next iteration of the loop
	}
    
}
  
return 0;			// End the program
}


 
