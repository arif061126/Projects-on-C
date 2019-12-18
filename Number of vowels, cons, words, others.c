#include<stdio.h>

int main()

{
    char str[100],ch;
    int i,vowel,cons,word,number,other;
    i=vowel=cons=word=number=other=0;

    printf("Please enter a string: ");

    gets(str);

    while((ch=str[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')

            vowel++;

        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))

            cons++;

        else if(ch==' ')

            word++;

        else if(ch>='0'&&ch<='9')

            number++;

        else

            other++;

        i++;

    }

    word++;

    printf("The number of vowels: %d\n", vowel);

    printf("The number of consonents: %d\n", cons);

    printf("The number of words: %d\n", word);

    printf("The number of numbers: %d\n", number);

    printf("The number of other characters: %d\n", other);









}
