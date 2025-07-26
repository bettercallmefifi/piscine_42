#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include "unistd.h"

typedef int t_bool;
# define true 1
# define false 0
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
# define EVEN(nbr) ((nbr) % 2 == 0)
# define SUCCESS 0

#endif