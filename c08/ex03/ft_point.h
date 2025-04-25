/*
• Create a file ft_point.h that’ll compile the following main :
#include "ft_point.h"
void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}
int main(void)
{
t_point point;
set_point(&point);
return (0)
*/

#ifndef FT_POINT_H
#define FT_POINT_H

// Define the structure t_point with two integer fields: x and y
typedef struct s_point
{
    int x;
    int y;
} t_point;

// Declare the set_point function that sets the values of x and y
void set_point(t_point *point);

#endif

#include "ft_point.h"

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point point;
    
    // Set the values of the point using set_point
    set_point(&point);
    
    // Return 0 to indicate successful execution
    return 0;
}
