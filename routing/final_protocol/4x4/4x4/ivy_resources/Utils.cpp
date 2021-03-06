#include "Utils.hpp"
#include <string>

// char direction(const char c) 
// {
//   switch (c) {
//     case 0: return 'n';
//       break;
//     case 1: return 'e';
//       break;
//     case 2: return 's';
//       break;
//     case 3: return 'w';
//       break;
//     default: return 'X';
//   }
// }

std::string longDirection(const char c) 
{
  switch (c) {
    case 'n': return "north";
      break;
    case 'e': return "east";
      break;
    case 's': return "south";
      break;
    case 'w': return "west";
      break;
    default: return "SOMETHING_WENT_WRONG";
  }
}