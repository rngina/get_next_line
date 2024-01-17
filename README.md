# get_next_line
The `get_next_line` project is an implementation of a function that reads a line from a file descriptor, allowing the user to retrieve the content of a file or standard input one line at a time. The function supports repeated calls in a loop, enabling sequential reading of the file. Passed 125/125.

## Function Prototype
```c
char *get_next_line(int fd);
```

## Files
get_next_line.c: Contains the implementation of the get_next_line function.  
get_next_line_utils.c: Contains helper functions necessary for the implementation.  
get_next_line.h: Header file with the prototype of the get_next_line function.  

## Parameters
fd: The file descriptor to read from.

## Return Value
Read line: Returns the line that was read.  
NULL: Indicates that there is nothing else to read, or an error occurred.

## External Functions
read  
malloc  
free  

## Usage
Compile the code using the following options, where n is the desired buffer size:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=n <files>.c
```
Optionally, you can choose the default value for the buffer size.

## Important Note
The returned line includes the terminating \n character, except if the end of the file was reached and does not end with a \n character.
get_next_line has undefined behavior if the file pointed to by the file descriptor changed since the last call while read() didn't reach the end of the file.
The project does not support binary files, and handling for this behavior is left to the implementer's discretion.

## Bonus Part
Multiple File Descriptors Support: The bonus part allows the get_next_line function to handle multiple file descriptors simultaneously. This means that you can call the function to read from different file descriptors without losing the reading thread of each descriptor. For instance, reading from fd 3, then fd 4, fd 5, and cycling through them without interference.
