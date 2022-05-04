
#include "Utils.hpp"

#include <string>
#include <iomanip>


char getZone(const char zone) // This needs to be different for each version
	{
		// Zones: a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  (all possible zones)
		// Codes: 0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17  (depend on node type)
    switch (zone) {
      case 0: return 'a'; //break;
      case 1: return 'b'; //break;
      case 2: return 'c'; //break;
      case 3: return 'd'; //break;
      case 4: return 'e'; //break;
      case 5: return 'f'; //break;
      case 6: return 'g'; //break;
      case 7: return 'h'; //break;
      case 8: return 'i'; //break;
      case 9: return 'j'; //break;
      case 10: return 'k'; //break;
      case 11: return 'l'; //break;
      case 12: return 'm'; //break;
      case 13: return 'n'; //break;
      case 14: return 'o'; //break;
      case 15: return 'p'; //break;
      case 16: return 'q'; //break;
      case 17: return 'r'; //break;
      default: return 'X';
    }
	}


char direction(const char c) //inverse of input direction (coming in north indicates traveling south)
{
  switch (c) {
    case 0: return 's';
      break;
    case 1: return 'w';
      break;
    case 2: return 'e';
      break;
    case 3: return 'n';
      break;
    default: return 'X';
  }
}

char linkStatus(const char c) //inverse of input direction (coming in north indicates traveling south)
{
  switch (c) {
    case 0: return '*';
      break;
    case 1: return 'F';
      break;
    case 2: return 'B';
      break;
    default: return '-';
  }
}

std::string longDirection(const char c) 
{
  switch (c) {
    case 0: return "NORTH";
      break;
    case 1: return "EAST ";
      break;
    case 2: return "SOUTH";
      break;
    case 3: return "WEST ";
      break;
    case 9: return "DROP ";
      break;
    default: return "SOMETHING_WENT_WRONG";
  }
}