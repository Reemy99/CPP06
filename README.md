# C06

## Convert from scalar type:
Scalar type is a type that holds a single value of a defined range. Scalars include arithmetic types (integral or floating-point values).

__________________________________________________________

## Using casts to Convert :
  there is few types for casts
  
    1- static_cast.
  
    2- dynamic_cast.
  
    3- const_cast.
  
    4- reinterpret_cast.

In this project we will use *static_cast* :

  This is the simplest type of cast that can be used. It is a compile-time cast. It does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions, and you can write it in this syntax
      
      static_cast< new-type >( expression )
  
Useful functions:

1)  *std::strtoll:* It converts a string of characters into a number, but it's smart enough to handle situations where the conversion might not be possible.
2)  *std::find_first_not_of:* This function helps you find the position of the first character in the string that is not present in a given set of characters.
3)  *std::invalid_argument:* is an exception class that is used to represent invalid arguments passed to a function, and it's thrown when the function's requirements are not met.
4)  rand() function : is a built-in function used to generate random numbers in our code. The range of this random number can be varied from [0 to any maximum number], we just need                         to define the range in code. the rand() function is defined in the header file named <cstdlib>.
