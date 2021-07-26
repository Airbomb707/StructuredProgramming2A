#include <stdio.h>

void reverse(char* Start, char* End){
	char temp;
	while (Start < End) {
		temp = *Start;
		*Start++ = *End;
		*End-- = temp;
	}
}

void reverseWords(char* s)
{
	char* word_Start = s;
	char* temp = s;

	while (*temp) {
		temp++;
		if (*temp == '\0') {
			reverse(word_Start, temp - 1);
		}
		else if (*temp == ' ') {
			reverse(word_Start, temp - 1);
			word_Start = temp + 1;
		}
	}
	reverse(s, temp - 1);
}

int main()
{
	char s[] = "Hewwo, did you know the pokemon girafarig is spelled the same backwards? \n";
	char* temp = s;
	reverseWords(s);
	printf("%s", s);
	return 0;
}