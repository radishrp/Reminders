#include <stdio.h>
#include <stdlib.h>

    int is_lowercase(char test_character) {
        if (test_character & 0x20) {

        }


    }










int main()
{
    int total = 5;
    int *pointer = &total;
    int *prrr;
    printf("My total value is %d\n", total);
    printf("My percent p of total is %p\n", total);
    printf("My percent d of total is %d\n", total);
    printf("My percent p of pointer is %p\n", pointer);
    printf("My percent d of pointer is %d\n", pointer);
    printf("My percent p of asterisk pointer is %p\n", *pointer);
    printf("My percent d of asterisk pointer is %d\n", *pointer);
    printf("My percent p of ampersand pointer is %p\n", &pointer);
    printf("My percent d of ampersand pointer is %d\n", &pointer);
    printf("My percent p of ampersand total is %p\n", &total);
    printf("My percent d of ampersand total is %d\n", &total);

    unsigned int test = 1;
    printf("signed int: %i\n", test);
    printf("unsigned int: %u\n", test);

    char stuff = 'c';
    char *ptrC;
    ptrC = &stuff;
    printf("%p\n", ptrC);
    printf("%c\n", *ptrC);
    printf("%c\n", stuff);
    printf("whatthehell\n");
    printf("%c\n", *ptrC);

    char *string;
    string = "This string is not modifiable!";
    printf("Printing s of string results in the string: %s\n",string);
    printf("Printing c of *string results in a single character: %c\n\n",*string);
    char string2[] = "this string is modifiable!";
     printf("%s\n",string2);
    char *pointer2 = string2;
    pointer2 = pointer2 +1;
    printf("%s\n\n",string2);


    int height = 6;
    int width = 0;
    if (height == 5 || width == printf("123\n\n") )
    {
        printf("If statement evaluated as true\n");
    };

    char my_char = 'a';

    if (is_lowercase(my_char))
        {
        printf("It is lower case!\n");
    };

int i = 0;

    char date[] = "20140110";
    char *datepointer = date;
    char year[5]="YYYY";
    char month[3]="MM";
    char day[3]="DD";

   for(i=0;i<4;i++){
    year[i]=date[i];
    if(i<2){
    month[i]=date[i+4];
    day[i]=date[i+6];
   };
   };

    printf("%s\n%s\n%s\n",year,month,day);


    char *newpointer = malloc(10);
    int **star_pointer = malloc(2*sizeof(int *));
    int height2 = 5;
    *star_pointer = &height2;

    printf("The value of is %d\n",**star_pointer);




return 0;
}
