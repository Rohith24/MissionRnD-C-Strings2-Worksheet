/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int pos = 0;
	while (str[pos] != '\0') pos++;
	pos--;
	while (str[pos] == ' ' && pos != 0)pos--;
	while (str[pos] != ' ' && pos != 0)pos--;
	char *res = (char *)malloc(sizeof(char));
	int respos = 0;
	while (str[pos] != ' ' && str[pos] != '\0')
		res[respos++] = str[pos++];
	res[respos] = '\0';
	return res;
}
