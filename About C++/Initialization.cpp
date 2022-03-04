// Source: https://www.facebook.com/code.cung.rr/posts/291877833049314

#include <iostream>
#include <array>
#include <vector>
#include <iterator>

using namespace std;

/************************************************
    Couple of ways to initializa an integer
************************************************/

int i1; // undefined value

int i2 = 18; // note: inits with 18

int i3(18); // inits with 18

int i4 = int(); // inits with 0

int i5{18}; // inits with 18

int i6 = {18}; // inits with 18

int i7{}; // inits with 0

int i8 = {}; // inits with 0

auto i9 = 8; // inits int with 8

auto i10{20}; // C++11: std::initializer_list<int>, C++ 14 int

auto i11 = {9}; // inits std::initializer_list<int> with 9

auto i12 = int{2002}; // inits int with 2002

int i13(); // declares a function

// int i14(18, 8); // compile-time error

int i15 = (7, 9); // OK, inits int with 9 (comma operator)

// int i16 = int(20, 9); // compile-time error

// auto i17(7, 9); // compile-time error

auto i18 = (7, 9); // Ok, inits int with 9 (comma operator)

// auto i19 = int(7, 9); // compile-time error



/**********************************************
    Problems with parentheses
**********************************************/

unsigned int x(-1); // BUG: x initialized with 4294967295

char c(300); // BUG: c initialized with ','

int f(); // f is now a function

vector<int> v(
    istream_iterator<int> (cin),
    istream_iterator<int> ()
); // declares v as a function with return type vector<int>



/************************************************
    Simplest data structures: vector and array
************************************************/

vector<int> a1(3, 0); // a1 = [0, 0, 0]

vector<int> a2{3, 0}; // a2 = [3, 0]

array<int, 5> a3; // undefined behavior in C++ 11

array<int, 5> a4{}; // a4 = [0, 0, 0, 0, 0]



/*
    Should we initialize by {} in C++ 11 or later?
*/

char c{'c'}; 

char d{'c' + 1}; // warning or compile error, depends on compiler flags

auto i = {188}; // i is initializer_list<int>, not an int

auto i {209}; // i is an int