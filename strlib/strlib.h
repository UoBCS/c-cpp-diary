/**
 * strlib - A string manipulation library for educational purposes
 *
 * Author: Ossama Edbali (ossedb@gmail.com)
 * MIT License
 */

#ifndef _STRLIB_H
#define _STRLIB_H

int str_len(char s[]);
int str_cmp(char s1[], char s2[]);
int lower(int c);
void squeeze(char s[], char c);
int contains(char s[], char c);
void str_cat(char s1[], char s2[]);
void reverse(char s[]);

#endif /* _STRLIB_H */
