statically types language like c++ vs dynamically typed
so statically typed there you have to define the type of variable when you create it
in dynaically like python you dont and it can change over the life of the program

poll numbers like int, short smaller integer that take less memory
long similar to int, long long take more integer

floats: double, float, long double; float type can result in loss of accuracy

bool for booleans like true fals

char for storing single characters

auto so auto keyword is like automatic determination of type

brace initialisation:
instead of = to initalise variables use {} which stops you from wrongly initialising variables and throws an error
also if you dont declar a variable in {} it will be initialised to 0, without {} there so if there is just a single variable without {} or = then it would use garbage/ the place in memory where the variable is stored for the value


you can represent numbers in decimal, binary or hexadecimal

narrowing:
be careful of storing larger data types in smaller ones like int in short

generate random numbers:
if you just use rand() youl get a random number but itll stay the same each time you run your program
you can use seed rand or srand() and hard code a number but again each time same random number
you can seed it with elapsed time sinve 1970 in seconds to each time you run it in a anew second a you get a new but really high value, because elapsed is so high
so specify an upper limit with % 10 so returns whole number from 0 to 9 that doesnt fit into 10
for something like a dice use <
const short maxValue = 6;
const short minValue = 1;
int dice = (rand() % (maxValue -minValue +1)) + minValue;


formatting output:
formating into columns
#include <iomanip>
// stream maipulator to modify stream, setw(10) reserves 10 charcters for the following input
left for left allign , sticky manipulator so in use until changed
setw(10) to set width of column, so 10 spaces are allocated for the following

formatting numbers:
cout << fixed << setprecision(2) << 13.456234; // 2 decimal points, also sticky manipulator

overflowing:
if you try to store values larger than the type can handle so if it is too big for that variable it will overflow and go to the lowest possible number

underflowing:
with too small numbers, they will wrap around to the biggest


booleans:
return 0 for false and 1 for true
to return the word use stream manipulator boolalpha it is also sticky manipulator, to turn off again use noboolalpha

characters and strings:
you can respresent char with numbers if in cout you prefeic the char variable with +, use '' for single character and "" for sequence of characters

to read a string with a space use 
getline(cin, name); // requires two arguments: input stream so cin, string variable 

arrays:
store a collection of items like numbers dates integers
use[] after variable name and access with index
if not otherwise initialised all are 0
if [] empty then put all your values in {}
if you want to fill it later and have values initialised to 0 use a number in []
if you accidentally access an index not in the array youl get garbage


casting/type conversion:
cast y to int
cstyle casting (int)y
c++ casting static_cast<int>(y); this version is recomended




### Decision making

comparison operators:
like > < >= <= == !=, something like x != 5 etc are all boolean expressions, so produces a boolean value
would return 1 or 0 for true or false or use boolalpha
= is more of a assignment operator
== is actually checking for equality
compiler will automatically convert int to double if comparing int with double so from less precise type to more precise
comparing character is case sensitive


logical operators:
used to combine two or more boolean expressions or conditions
like && for and
|| for or 
! not operator, used like !isEligible


order of logical operator:
high order to lower: () ! && ||
so use () if || should be evaluated  before &&



if statements:
similar to python, see example for syntax


nested if statements:
one inside another if statement


conditional operator:
used to simplify if statements
type condition and then works like if and else statement with ? and :
double commission = (sales > 100) ? .2 : .1; // if sales are over 100 then 0.2 else 0.1


switch statement:
only use to compare variables with certain values but cant check for > or < 
so not as flexible as if statements









