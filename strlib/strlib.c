/**
 * strlib - A string manipulation library for educational purposes
 *
 * Author: Ossama Edbali <ossedb@gmail.com>
 * MIT License
 */

int str_len(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

int str_cmp(char *s, char *t)
{
    int l1 = str_len(s),
	l2 = str_len(t),
	len = l1 > l2 ? l1 : l2,
	i;

    for (i = 0; i < len; i++)
    {
	if (s[i] > t[i])
	    return 1;
	else if (s[i] < t[i])
	    return -1;
    }
    
    return l1 > l2 ? 1 : ((l1 < l2) ? -1 : 0);
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

void squeeze(char s[], char c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];

    s[j] = '\0';
}

int contains(char s[], char c) {
    int i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            return 1;

    return 0;
}

void str_cat(char s[], char t[])
{
    int i = 0, j = 0;

    while (s[i] != '\0')
        i++;

    while ((s[i++] = t[j++]) != '\0');
}

void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = str_len(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
	s[j] = c;
    }
}
