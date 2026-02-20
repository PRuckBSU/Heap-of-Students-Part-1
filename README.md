Student Data System – Part 1
Overview

Part 1 of this project focuses on building the core data classes for a student management system.

The goal of this part was to:

Design normalized classes

Fully implement the Date class

Fully implement the Address class

Create the Student class structure

Create a working Makefile

Ensure the program compiles and runs

Class Design

The system uses three classes:

Date

month

day

year

Address

street

city

state

zip

Student

firstName

lastName

Address object

Date birthDate

Date gradDate

creditHours

Each class is responsible only for its own data.

Date Class – Pseudocode
init(dateString)

Input format: mm/dd/yyyy

find first '/'
find second '/'

month = substring before first '/'
day = substring between slashes
year = substring after second '/'

convert all values to integers
store values

printDate()

use switch statement to convert month number to month name
print: MonthName day, year

Address Class – Pseudocode

init(street, city, state, zip)
store each parameter into member variables

printAddress()

print street
print city + " " + state + ", " + zip

Compilation

make
make run
make clean

Current Output

Hello!
123 W Main St
Muncie IN, 47303
January 27, 1997
