#include <stdio.h>

int main(void)
{
char letter; /* declare letter variable */

/* loop through lowercase letters in reverse order */
for (letter = 'z'; letter >= 'a'; letter--)
{
    putchar(letter); /* print each letter */
}

putchar('\n'); /* print newline character */

return 0;
}
