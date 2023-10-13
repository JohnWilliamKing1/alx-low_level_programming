#include "main.h"
/**_isdigit - check if a character is digit 
 * @c: the number to be checked
 * Return: 1 for upper or 0 for else
 */
int _isdigit(int c)
{
if(c >= '0' && c <= '9')
{
return 1;
}
else
{
return 0;
}
}
