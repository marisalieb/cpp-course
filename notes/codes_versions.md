# for anyone else reading this please ignore this file, it is just a collection of easy pieces of code


C++ code versions

## basics chapter


1 hello world

#include <iostream>

using namespace std;

int main() {
int a = 1;
int b = 20;
cout <<"\nHello WOrld!\n" << file_size << '\n';
return 0;
}


2 variables

#include <iostream>

using namespace std;

int main() {
int a = 178;
int b = 20;
int c = a;
a = b;
b = c;


    cout <<"\n" << a << '\n';
    return 0;
}


3 constants

#include <iostream>

using namespace std;

int main() {
const double pi = 3.14;

    cout <<"\n" << pi << '\n';
    return 0;
}



4  mathematical expressions

#include <iostream>

using namespace std;

int main() {
double x = 340;
int y = 63;
double z = x / y; // also + - * / % (remainder of division), but / a bit tricky will return int if only dealing with ints
// to get a float you need to change x or y to double, just z to double doesnt work
x = x + 5;
int s = x++; // increment operator like x=x+1 same with y-- ;
int t = ++y; // difference s = 345 vs t = 64
// prefix will store x in s first and then increment x; postifx will increment first and then store y in t


    cout <<"\n" << t << '\n';
    return 0;
}



5  order of operators

#include <iostream>

int main() {
double x = 10;
double y = 5;
double z = (x+10)/(3*y);

    std::cout <<"\n" << z << '\n';
    return 0;
}



6  writing output to console

#include <iostream>

using namespace std;

int main() {
int x = 10;
int y = 3;

    cout <<"\n" << "x = " << x << endl
                << "y = " << y << '\n';
    
    return 0;
}


7 exercise writing output to console

#include <iostream>

using namespace std;

int main() {
double sales = 85000;
cout << "sales: $" << sales << endl;

    const double stateTaxRate = 0.07;
    double stateTax = sales * stateTaxRate;
    cout << "state tax: $" << stateTax << endl;

    const double countyTaxRate = 0.015;
    double countyTax = sales * countyTaxRate;
    cout << "county tax: $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "total tax: $" << totalTax;
    
    return 0;
}




8  cin operator; reading from the console

#include <iostream> // iostream has cin and cout

using namespace std;

int main() {
cout << "Enter values for x and y:" ;
double x;
double y;
cin >> x >> y;
cout << x * y;

    return 0;
}





9 exercise simple Celsius to Fahrenheit converter


#include <iostream> // iostream has cin and cout

using namespace std;

// excercise convert celsius to fahrenheit

int main() {
cout << "Enter value for degrees in celcius:" ;
int celcius;
cin >> celcius;

    double fahrenheit = (celcius * 1.8) + 32;
    cout << fahrenheit << " degrees in fahrenheit";

    return 0;
}






10  use floor and pow functions

#include <iostream>
#include <cmath> // checkout cmath reference like cplusplus.com

using namespace std;

int main() {
double result = floor(10.23);
double result2 = pow(2, 4); //2 to the power of 4
cout << result << " " << result2;

    return 0;
}





11 exercise radius to area of circle

#include <iostream>
#include <cmath>

using namespace std;

//ask user to enter the radius of a circle and then print the area of circle

int main() {
cout << "Enter radius of circle:" ;
double radius;
cin >> radius;

    const double pi = 3.14;
    double area = pi * pow(radius, 2);

    cout << "Area of circle is:" << area;

    return 0;
}



## Fundamental data types


12 

#include <iostream>

using namespace std;

int main() {
double price = 99.99;
float interestRate = 3.67F; // F or f important here, so it doesnt get treated as a double
long fileSize  = 90000L; // l so compiler doesnt treat it as integer
char letter = 'a'; // '' to represent a character
bool isValid = true;
int number {};
return 0;
}


13 random numbers 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
// long elaspedSeconds = time(nullptr); // seconds since 1970
srand(time(0));
int number = rand() % 1000;
cout << number;
return 0;
}



14 dices

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// mimic dice, two random values between 1 and 6;
// limit range of random numbers use [rand() % (maxValue -minValue +1)] +minvalue

int main() {
// long elaspedSeconds = time(nullptr); // seconds since 1970
srand(time(0));
const short maxValue = 6;
const short minValue = 1;

    int dice = (rand() % (maxValue -minValue +1)) + minValue;
    int dice2 = (rand() % (maxValue -minValue +1)) + minValue;
    cout << dice << ", " << dice2;
    return 0;
}



15 formatting output into columns

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
// stream maipulator to modify stream
// format into columns
cout << left;
cout << setw(50) << "Hi" << setw(50) << "Mum" << endl
<< setw(50) << "It's summer" << setw(50) << "time!";
return 0;
}



16 formating numbers

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
cout << fixed << setprecision(2) << 13.456234; // 2 decimal points, also sticky manipulator

    return 0;
}


17 excercise

#include <iostream>
#include <iomanip>

using namespace std;

// excercise print a table

int main() {

    cout << left << setw(15) << "Course" << right << setw(15) << "Students" << endl
    << left << setw(15) << "C++" << right << setw(15) << 100 << endl
    << left << setw(15) << "JavaScript" << right << setw(15) << 50;
    return 0;
}



18 over and underflow

#include <iostream>
#include <limits>

using namespace std;

int main() {
int number = numeric_limits<int>::min();
number --;
cout << numeric_limits<int>::min() << endl
<< numeric_limits<int>::max() << endl
<< number; // underflown so return max number now
return 0;
}



19 booleans

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
bool isNewUser = true;
cout <<boolalpha << isNewUser;
return 0;
}



20 readiing in strings

#include <iostream>

using namespace std;

int main() {
string name;
cout << "Enter your name:";
cin >> name;
getline(cin, name); // requires two arguments: input stream so cin, string variable so name
cout << "Hi" << name;
return 0;
}




21 address exercise 

#include <iostream>

using namespace std;

// exercise print street city state and zipcode

int main() {
string street;
cout << "Enter your street name:";
getline(cin, street);

    string city;
    cout << "Enter your city:";
    getline(cin, city);

    string country;
    cout << "Enter your country:";
    getline(cin, country);

    string postCode;
    cout << "Enter your postcode:";
    getline(cin, postCode);

    cout << street << ", " << city << endl
    << country << ", " << postCode;
    return 0;
}




22 arrays

#include <iostream>

using namespace std;

int main() {

    int numbers[7] = {10 , 342, 123}; // if not otherwise initialised all are 0, if [] empty then put all your values in {}
    numbers[2] = 2342;
    cout << numbers[0]; // if you accidentally access an index not in the array youl get garbage

    return 0;
}



23 string array exercise

#include <iostream>

using namespace std;

int main() {

    string names[3];
    cout << "Enter name: ";
    getline(cin, names[0]);

    cout << "Enter name: ";
    getline(cin, names[1]);

    cout << "Enter name: ";
    getline(cin, names[2]);


    cout << names[0];

    return 0;
}




24 casting or conversion
#include <iostream>

using namespace std;

int main() {

    int x = 10;
    int y = 3;
    double z = x / static_cast<double>(y);  // just becasue z is set to double dividing two int will result in int, so use casting
    cout << z;
    
    return 0;
}





25  comparison operators

#include <iostream>

using namespace std;

int main() {

    int x = 10;
    double y = 3;
    bool result1 = x != y;

    char a = 'e';
    char b = 'A';
    bool result2 = a == b;
    cout << boolalpha << result1 << result2;

    return 0;
}




26 logical operators

#include <iostream>

using namespace std;

int main() {

    int age = 25;
    int salary = 15;
    bool isEligible = (age  > 18 && age < 65) || (salary > 500);

    cout << boolalpha << isEligible;

    return 0;
}





27 order of logical operators

#include <iostream>

using namespace std;

int main() {

    bool a = true;
    bool b= false;
    bool c = false;

    bool result = b && !a;
    // first !a is evaluated so a now false so now entire expression ist false

    bool result2 = a || b && c;
    // b and c or a
    
    cout << boolalpha << result << result2;

    return 0;
}



28 exercise

#include <iostream>

using namespace std;

int main() {

    bool worldCitizen = true;
    bool bachelorDegree = false;
    short workExperienceYears = 3;

    bool jobEligibility = worldCitizen && (bachelorDegree || (workExperienceYears >= 2));

    cout << boolalpha << jobEligibility;

    return 0;
}





29 simple if statement

#include <iostream>

using namespace std;

int main() {
int temperature = 25;
if (temperature < 10)
cout << "cold";
cout << "Done!";

    return 0;
}


  30 double if statement cout

#include <iostream>

using namespace std;

int main() {
int temperature = 5;
if (temperature < 10) {
cout << "cold";
cout << "Wear jacket";
}


    return 0;
}



31 full if statement

#include <iostream>

using namespace std;

int main() {
int temperature = 3;
if (temperature < 15)
cout << "cold";
else if (temperature < 25)
cout << "nice";
else
cout << "hot";

    return 0;
}




32 if statement exercise

#include <iostream>

using namespace std;

int main() {
int sales = 2'000;
double commission;

    if (sales <= 10'000) commission = .1;
    else if (sales <= 15000) commission = .15;
    else commission = .2;

    cout << commission;

    return 0;
}





33 nested if statements

#include <iostream>

using namespace std;

int main() {
bool worldCitizen = true;
bool antarcticCitizen = true;
short tuition = 0;

    if (worldCitizen) {  // (worldCitizen) or (!worldCitizen) for false
        if (!antarcticCitizen) tuition = 100;
    }
    else tuition = 1000;
    
    return 0;
}



34 conditional operator 

#include <iostream>

using namespace std;

int main() {
int sales = 1000;
double commission = (sales > 100) ? .2 : .1; // if sales are over 100 then 0.2 else 0.1

    cout << commission;

    return 0;
}




35 conditional operator exercise

#include <iostream>

using namespace std;

int main() {

    cout << "Enter two values:";
    int first;
    int second;
    cin >> first >> second;

    int largerValue;
    largerValue = (first > second) ? first : second;
    // if (first > second)
       // largerValue = first;
    // else largerValue = second;

    cout << "larger value is: " << largerValue;

    return 0;
}





36 switch statement and alternative if statement with same logic

#include <iostream>

using namespace std;

int main() {
cout << "1 - create account" << endl
<< "2 - change password" << endl
<< "3 - quit" << endl
<< "Select an option: ";
short input;
cin >> input;


    // switch keyword and then variable in ()
    switch (input) {
        // add case and default labels
        case 1: // so if input == 1
            cout << "You selected 1.";
            break;
        case 2:
            cout << "You selected 2.";
            break;
        default:
            cout << "You quit. Bye bye."; // dont need a break label after the default label of the switch block

    }


    if (input ==1)
        cout << "You selected 1.";
    else if (input ==2)
        cout << "You selected 2.";
    else
        cout << "You quit. Bye bye.";


    return 0;
}





37 switch statement exercise

#include <iostream>

using namespace std;

int main() {
cout << "Enter two values:";
int first;
int second;
cin >> first >> second;

    cout << "Enter an operator: ";
    char operator1;
    cin >> operator1;
    
    switch (operator1) {
        case '+':
            cout << (first + second);
            break;
        case '-':
            cout << (first - second);
            break;
        default:
            cout << "Invalid operator.";
    }

    return 0;
}



38 for loop with odd numbers

#include <iostream>

using namespace std;

int main() {
for (int i = 0; i <= 5; i++) {
// or (int i = 5; i >= 0; i--) for reverse order

        // only print odd numbers
        if (i%2 != 0)
            cout << i << endl;
    }
    return 0;
}



39 excercise for loop factorial

#include <iostream>

using namespace std;

int main() {
cout << "Enter a positive number: ";
int number;
cin >> number;

    if (number < 0)
        cout << "Number has to be poisitve";
    else {
        int factorial = 1;
        for (int i = 1; i <= number; i++)
            factorial *= i;
        cout << "The factorial of " << number << ": " << factorial;
    }

    return 0;
}


40 simple range based for loop array

#include <iostream>

using namespace std;

int main() {
int numbers[] = {1, 2, 4, 6, 7, 9};

    for (int number: numbers) // like for number in numbers
        cout << number <<endl;

    return 0;
}




41 simple range based for loop string

#include <iostream>

using namespace std;

int main() {
string name = "Marisa Liebner";
for (char ch: name)
cout << ch << endl;


    return 0;
}




42 exercise range base for loop

#include <iostream>

using namespace std;

// exercise teperatur list average

int main() {
int temperatures[] = {1, 2, 4, 6, 7, 9, 23, 33 , 34};
double sum = 0;

    for (int temperature: temperatures)
        sum += temperature;

    short count = sizeof(temperatures) / sizeof(int);
    double average = sum / count;

    cout << average <<endl;

    return 0;
}



43 simple while loop

#include <iostream>

using namespace std;

int main() {
int i = 1;
while (i <= 5) {
cout << i << endl;
i++;
}

    return 0;
}




44 simple while loop with if condition

#include <iostream>

using namespace std;

int main() {
int number = 0;
while (number < 1 || number > 5) {
cout << "Number: ";
cin >> number;
if (number < 1 || number > 5)
cout << "Enter number between 1 and 5." << endl;
}
return 0;
}



45 exercise while loop

#include <iostream>

using namespace std;

int main() {
int number = 2;
int guess;

    while (guess != number) {
        cout << "Guess a number: ";
        cin >> guess;
        if (guess == number)
            cout << "You guessed correctly." << endl;
    }
    return 0;
}




46 do while loop

#include <iostream>

using namespace std;

int main() {
int number;

    do {
        cout << "Number:";
        cin >> number;
    } while (number < 1 || number > 5);

    return 0;
}






47 continue statement

#include <iostream>

using namespace std;

int main() {
for (int i = 1; i <= 5; i++) {
if (i % 3 != 0)
cout << i << endl;
}

    // or use continue here
    for (int i = 1; i <= 5; i++) {
        if (i % 3 == 0)
            continue;
        cout << i << endl;
    }
    
    return 0;
}



48 break statement

#include <iostream>

using namespace std;

int main() {

    while(true) {
        cout << "Number: ";
        int number;
        cin >> number;
        if (number >= 1 && number <= 5)
            break;
        cout << "error wrong number" << endl;
    }

    return 0;
}



49 simple nested loop

#include <iostream>

using namespace std;

int main() {

    for (int x = 1; x <= 5; x++)
        for (int y = 1; y <= 5; y++)
            cout << "(" << x << ", " << y << ")" << endl;
    return 0;
}



50 nested loop exercise

#include <iostream>

using namespace std;

int main() {
cout << "Rows:";
int rows;
cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++)
            cout <<  "*";
        cout << endl;

    }
    return 0;
}





51 simple void function

#include <iostream>

using namespace std;

void greet() {
// name greet for function and then in () use 0 or more parameters

    cout << "Hello world." << endl;
}
// to use this function in main function thype greet()

int main() {
// call/invoke/execute this function
greet();

    cout << "Done";
    return 0;
}





52 functions examples

#include <iostream>

using namespace std;

void greet(string firstName, string lastName) {
cout << "Hello " << firstName << " " << lastName << endl;
}

// function that returns a value and has a single task
string fullName(string firstName, string lastName) {
return firstName + " " + lastName;
}

int main() {
greet("Marisa", "Liebner");
string name = fullName("Alana", "Kayri");
cout << name << endl;
cout << "Done";
return 0;
}



53 combining functions

#include <iostream>

using namespace std;

void greet(string name) {
cout << "Hello " << name << endl;
}

// function that returns a value and has a single task
string fullName(string firstName, string lastName) {
return firstName + " " + lastName;
}

int main() {
greet(fullName("Alana", "Kayri"));
cout << "Done";
return 0;
}



54 exercise functions

#include <iostream>

using namespace std;

int max(int first, int second) {
return (first > second) ? first : second;
}

int main() {
int maximum = max(10, 3);
cout << maximum;
return 0;
}



55 default values in functions

#include <iostream>

using namespace std;

double calculateTax(double income, double taxRate = .2) {
return income * taxRate;
}

int main() {
double tax =calculateTax(5000);
cout << tax;

    return 0;
}




56 overloading functions

#include <iostream>

using namespace std;

void greet(string name) {
cout << "Hello " << name;
}

void greet(string title, string name) {
cout << "Hello " << title << " " << name;
}

int main() {
greet("marisa");
return 0;
}



57 pass argument by reference

#include <iostream>

using namespace std;

void increasePrice(double& price) {
price *= 1.2;
}

int main() {
double price = 100;
increasePrice(price);
cout << price;

    return 0;
}



58 using namespaces

#include <iostream>
#include "utils/greet.hpp"

using std:: cout, std::cin;
using messaging::greet;

int main() {

    greet("Marisa");

    return 0;
}



59 



















