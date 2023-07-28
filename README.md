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

In this project we will use static_cast :
  This is the simplest type of cast that can be used. It is a compile-time cast. It does things like implicit conversions between types       (such as int to float, or pointer to void*), and it can also call explicit conversion functions, and you can write it in this syntax
      
      static_cast< new-type >( expression )
  
