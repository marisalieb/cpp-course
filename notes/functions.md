### Functions

so far only int function taht returns an int, but can also be a double, bool, string etc.

if the function doesnt return a value use void keyword

you can define multiple function outside of the main and then add them to the main and supply the arguments for the parameters there


parameters with a default value:
can define default value when defining the function but cant call non default paramters afterwards, so be careful witht the order
can overwrite default value when calling the function in main


overloading functions:
function with the same name but different parameters
signature of functions is the name of the function adn the number and type of parameters (but not the names of the parameters)
when overloading a function each function should have a unique signature



passing arguments by value or reference:
this is a reference parameter: (double& price), it references an existing variable so the variable from main is passed to the fuunction and no copy of the main variable is taken
that means any changes made in the not main function is visible outside of the function too
dont use reference when using numbers like int and doubles since they are really small in memory but with anything that is a large amount of data this can help, like strings eg


local vs global variables:
global variables are the ones that dont belong to any function not even main
but they can cause problems so use sparingly
makes sense to use as a constant to make sure none of the functions change this variable


declaring functions:
define functions before main function, but if it makes sense to have it after then you need to declare the function before the main
so youre not defining the functions with the {} youre just declaing it with the type, function name, and paramater type and name
so like this void greet(string name);
this is a function declaration or function prototype, while the actualy function is called a function definition


organising functions into separate files:
add a header file (where you add the function declaration) and an implementation file (where you add the function definition) to a newly created directory
so in your new directory you have a cpp and hpp file and then include it in the main like this #include "utils/greet.hpp"
but you can run into issues whn you include it in more than one file so make sure in your hpp file that its only once included,see file
additionally in clion you need to add it to the cmakelists liek this: add_executable(HelloWorld main.cpp utils/greet.cpp)

you can also just click new c++ source file or header file and add cpp file to targets so it is included in cmakelists file


using namespaces:
a namespace is like a bucket we put functions in and with this prevent name conflicts
eg std namespace for all the function in the standard library

put the greet function into a namespace to prevent future conflict eg when you use other peoples code but dont know how or if they also have a gree function
define namespace in both cpp and hpp files
and then in main either include whole namespace or type using messaging::greet; to only import the greet function from the messaging namespace, this is helpful when you run into naming conflicts




debugging:
run program line by line; add a break point red dot on the number of the line







