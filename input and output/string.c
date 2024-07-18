#include<stdio.h>

int main()
{
    char name[100];
    char school[100];

    printf("please enter your name:");
    scanf("%s ",&name);

    printf("plaese enter the name your school");
    scanf("%[^\n]s",&school);

        printf("%s\n",&name);
        printf("%s",school);

    return 0;    
}
