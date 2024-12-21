#include "main.h"
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum, i, j;

    /* Get lengths of both strings */
    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    /* Check if result can fit in buffer (including null terminator) */
    if (len1 >= size_r || len2 >= size_r)
        return (0);

    i = len1 - 1;
    j = len2 - 1;
    r[size_r - 1] = '\0';
    size_r--;

    /* Add digits from right to left */
    while (size_r > 0)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        /* If no more digits and no carry, break */
        if (i < 0 && j < 0 && sum == 0)
        {
            break;
        }

        carry = sum / 10;
        r[size_r - 1] = (sum % 10) + '0';
        size_r--;
        i--;
        j--;
    }

    /* Check if we ran out of buffer space */
    if ((i >= 0 || j >= 0 || carry) && size_r == 0)
        return (0);

    /* If there's still carry but we have space */
    if (carry && size_r > 0)
        r[size_r - 1] = carry + '0';

    /* Return pointer to start of result */
    return (r + size_r);
}
