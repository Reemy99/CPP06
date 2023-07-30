#ifndef CONVERT_HPP
#define CONVERT_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define WHITE   "\033[37m"
#define BLUE    "\033[34m" 
#define MAGENTA "\033[35m"   
#define CYAN    "\033[36m"  
#define YELLOW  "\033[33m"
#define RESET		"\033[0m"
#define BOLDMAGENTA "\033[1m\033[35m"  
#define BOLDGREEN   "\033[1m\033[32m"  
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"
#define BOLDBLUE    "\033[1m\033[34m"   
#define BOLDYELLOW  "\033[1m\033[33m"      
#define BOLDBLACK   "\033[1m\033[30m"  
#define BOLDRED     "\033[1m\033[31m" 

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

class Convert
{
    public:

        Convert ();
        Convert (const Convert &copy);
        Convert &operator= (const Convert &rhs);
        ~Convert();

        bool convertable(std::string val);
        bool isNum(std::string val);
        bool isChar(std::string val);
        bool isFloat(std::string val);
        bool isDouble(std::string val);

		static void	startConvert(std::string val);
		static void	toChar(std::string val);
		static void	toInt(std::string val);
		static void	toFloat(std::string val);
		static void	toDouble(std::string val);
};

#endif