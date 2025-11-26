#include <stdio.h>
#include <string.h> 
void swap(char *p1, char *p2);

int main()
{
    char str1[20], str2[20], str3[20];
    printf("Please enter three string:\n");
    fgets(str1, 20, stdin); str1[strcspn(str1, "\n")] = '\0';
    fgets(str2, 20, stdin); str2[strcspn(str2, "\n")] = '\0';
    fgets(str3, 20, stdin); str3[strcspn(str3, "\n")] = '\0';
    if (strcmp(str1, str2) > 0) swap(str1, str2);
    if (strcmp(str1, str3) > 0) swap(str1, str3);
    if (strcmp(str2, str3) > 0) swap(str2, str3);

    printf("\n");
    printf("%s\n%s\n%s\n", str1, str2, str3);
    return 0;
}
void swap(char *p1, char *p2)
{
    char temp[20]; 
    strcpy(temp, p1); 
    strcpy(p1, p2);   
    strcpy(p2, temp); 
}