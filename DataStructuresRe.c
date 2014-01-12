 #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int main(void) {

        struct first_description {
            char first_word[7];
            char second_word[12];
            char third_word[8];
        };

        struct first_description *our_pointer = malloc( sizeof(*our_pointer) );

        char *charptr = (char*) our_pointer;

        strcpy(our_pointer->first_word, "Reddit");
        strcpy(our_pointer->second_word, "Programming");
        strcpy(our_pointer->third_word, "Classes");

        printf("The first word is: %s  ", our_pointer->first_word);
        printf("The second word is: %s  ", our_pointer->second_word);
        printf("The third word is: %s  ", our_pointer->third_word);

        printf(" ");

        printf("Our data structure looks like this in memory: ");

        int i=0;
        for (; i < 27; i++) {
                if ( *(charptr + i) == 0) {
                    *(charptr + i) = '$';
                }

                printf("%c", *(charptr + i));
        }

        printf(" ");

        free(our_pointer);

        return 0;

    }
