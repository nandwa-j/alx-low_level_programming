#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: chararray string type
 */
void rev_string(char *s)
{
	int r, l, a, len;
	char t;

	len = strlen(s);
	l = 0;
	r = len - 1;

	for (a = l; a < r; a++)
	{
		t = s[a];
		s[a] = s[r];
		s[r] = t;
		r--;
	}
}
