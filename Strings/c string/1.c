#include<stdio.h>
#include<string.h>
int main(){
    //4 ways to initialise a string
    char str1[]="geeks";//without size
    char str2[6]="geeks";//with size but make sure you add the size of the null character as well
    char str3[7]={'g','e','e','e','k','s','\0'};//assigning character by character but make sure you give the null character as well
    char str4[]={'g','e','e','e','k','s','\0'};//assigning char by char but with null char.The size of the string is determined by the compiler automatically.
    char str6[]="hello";

    printf("%s",str1);
    int l;
    l=strlen(str1);
    printf("%d\n",l);

    //read a string from user
    // char str5[50];
    // scanf("%s",str5);
    // printf("%s\n",str5);//str5 is basically a pointer storing the base address of the string

    strcpy(str1,str6);//copies the content of str6 to str1
    printf("%s\n",str1);
    printf("%s\n",str6);
    return 0;
}