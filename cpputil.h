#include<iostream>
#include<sstream>
#include<string>
#include<iomanip>

using namespace std;

inline string formatDouble(double inputDouble, int prec = 2, bool showops = false)
{
       stringstream sstring;
       sstring << showpoint; // 
       sstring << fixed;  // ÏÔÊ¾¶¨µãÐ¡Êý
       sstring << setprecision(prec);  // ÏÔÊ¾¶àÉÙÎ»Ð¡Êý 
       if( true == showops)
       {
              sstring << showpos;   
       }
       
       sstring << inputDouble;
       string rtnStr = sstring.str();
       return rtnStr;       
}