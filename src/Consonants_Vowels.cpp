/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
bool isCharInVowels(char ch){
	char *vowels = "AEIOUaeiou";
	int pos = 0;
	while (vowels[pos]!='\0')
	{
		if (vowels[pos] == ch)
			return true;
		pos++;
	}
	return false;
}

void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	*consonants = 0;
	*vowels = 0;
	if (str == NULL)
		return;
	int pos = 0;
	while (str[pos] != '\0'){
		if ((str[pos] >= 'A'&&str[pos] <= 'Z') || (str[pos] >= 'a'&&str[pos] <= 'z')){
			if (isCharInVowels(str[pos]))
				*vowels = *vowels + 1;
			else
				*consonants = *consonants + 1;
		}
		pos++;
	}

}
