#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 (Success)
 */

int main(void)
{
    

    char *buffer = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    int bytesWritten = write(2, buffer, 58);
    if (bytesWritten == -1)
    {
	    return(1);
    }
    
    return(1);
}
