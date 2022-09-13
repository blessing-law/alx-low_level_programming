#include <unistd.h>
#ifndef _MAIN_H_
#define _MAIN_H_


/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c)

{
		return (write(1, &c, 1));
}

#endif /* _ MAIN_H_ */
