## CHARACTER ARRAYS IN CPP

## What is a Character Array?
- Character array is used to store strings in C++.
- It is basically an array of characters.
- Every character array string MUST end with a null character '\0'.
- '\0' tells the compiler: "string ends here".

Example:
char name[20] = "Harshita";

Internally it is stored like:
H a r s h i t a \0

--------------------------------------------

## Why is '\0' (null character) so important?
- '\0' marks the end of the string.
- While printing or calculating length, C++ reads characters until it finds '\0'.
- If '\0' is placed earlier manually, printing will stop there.

Example:
name[2] = '\0';

Output will be:
Ha

Because string becomes:
H a \0 r s h i t a

--------------------------------------------

## Input using cin
- When we use:
cin >> name;

- Input stops when a SPACE is found.

Example:
Input:
Harshita Preet Kaur

Stored value:
Harshita

Reason:
- cin treats space as end of input.
- Anything after space is ignored.

--------------------------------------------

## How to take input with spaces?
- Use:
cin.getline(name, size);

Example:
cin.getline(name, 20);

Now input:
Harshita Preet Kaur

Output:
Harshita Preet Kaur

--------------------------------------------

## Length of Character Array
- Character arrays do NOT store their length.
- Length is calculated by counting characters until '\0'.

Example logic:
count characters
stop when name[i] == '\0'

--------------------------------------------

## Passing Character Array to a Function
- You do NOT need to pass the size of the array.
- Reason:
- Function stops when it encounters '\0'.

Example:
int getLength(char name[])

Works perfectly without size.

