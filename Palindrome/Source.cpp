#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int HL, count1 = 0;
	char word[50];
	char* w1, * w2;
	scanf_s("%s", word, 49);
	w2 = word;
	w1 = word;
	HL = strlen(word);

	while (*w2 != '\0')
	{
		w2 = w2 + 1;
	}
	w2 = w2 - 1;

	for (int i = 0; i < HL / 2; i++)
	{
		if (*w1 == *w2)
		{
			count1 += 1;
		}
		w1 = w1 + 1;
		w2 = w2 - 1;
	}

	if (count1 != HL / 2)
	{
		cout << "Not Palindrome";
	}
	else if (count1 == HL / 2) cout << "Palindrome";
}