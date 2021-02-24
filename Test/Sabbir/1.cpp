#include <stdio.h>
#include <string.h>

const char* remove_char(char* str) {
    int i, j, l = strlen(str);
    for(i=0, j=0; i < l; i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            str[j++] = str[i];
    }
    str[j] = '\0';
    return str;
}

const char* replace_char(char* str, char ch) {
    int i, l = strlen(str);
    for(i=0; i<l; i++){
        if(str[i] == ' '){
            printf("found");
            str[i] = ch;
        }
    }
    return str;
}

int main() {
    char str[] = "north sou th2.co3m\0";
    // scanf("%s", &str);
    printf("%s\n", remove_char(str));
    printf("%s\n", replace_char(str, '#'));
    return 0;
}