#include <stdio.h>
#include <string.h>

int main(void)
{
    char word1[20], word2[20], word3[20];

    gets(word1);
    gets(word2);
    gets(word3);

    if(!strcmp(word1, "vertebrado")) {
        if(!strcmp(word2, "ave")) {
            if(!strcmp(word3, "carnivoro")) printf("aguia\n");
            else printf("pomba\n");
        }
        else {
            if(!strcmp(word3, "onivoro")) printf("homem\n");
            else printf("vaca\n");
            }
        }
    else {
        if(!strcmp(word2, "inseto")) {
            if(!strcmp(word3, "hematofago")) printf("pulga\n");
            else printf("lagarta\n");
        }
        else {
            if(!strcmp(word3, "hematofago")) printf("sanguessuga\n");
            else printf("minhoca\n");
            }
        }

    }

