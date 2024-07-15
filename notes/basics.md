C++ course Mosh
download from clion


c++ is case sensitive but doesn't care about how many white spaces

main function is the entry point to your program like a power button on a remote, before the function name (in this case main) you should specify the type of value it is going to return like int for integer, the main function should return a value of type int ; when we run the program the os is going to execute this function and the value that this function returns tells the os if our program terminated successfully or not

after the function name type () and inside the () you can specify the parameters of this function, a function can have 0 or more parameters ; afterwards {} and type code in between those the first of those can be on the same line as where we defined the function or on a new line underneath

before main function include files from the cpp standard library like this, type #include <iostream>, <> are to include files from the stl and iostream is the file name which is short for input output stream, this makes it possible to print something on the screen or have input from the user, there are different section in the stl for serving different purposes

in main type std which is short for stl which is like a container for the features currently available to us so the feature we have just imported at the top type :: to see al the features; use cout short for character out so this is used to output one or more characters, then type space, << and another space and then in "" type the text you want to print , then terminate the line using a semilcolon; in c++ this line is called a statement because it tells the os what to do, whenever you type a statement you should terminate it with a ;

then on the next line return 0 and ; , the 0 tells the os that the program is going to terminate correctly so if it returns any other value it means the program encountered an error

recap:
1. included file in the stl for printing on the screen
2. defined the main function, the entry point to the program, it returns an integer
3. in between {} is the code needed for this function, first line print , on second return value of 0


you need to compile this code to machine code


<#include <iostream>

int main() {
std::cout << "Hello, World!" << std::endl;
return 0;
}


<#include <iostream>

int main () {
return 0;

}



naming conventions  for variables and constants:
snake case  file_size
pascal case FileSize
camel case fileSize

camel for variables
pascal for classes


Standard Output Stream
using std::cout means we can write a sequence of characters on the standard output which is the terminal window
a sequence of characters = a stream, the standard output = the terminal window or console

<< are the stream insertion operators it is an operator for inserting something to your output string, used for cout

< >> is the stream extraction operator used for cin
