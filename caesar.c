#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//to use atoi() function ASCII[(a) to (i)]int.

bool isDigit(string s);

int main(int argc, string argv[])
{
    //checks if the user used the right syntax and if the user input a digit
    if(argc == 2 && isDigit(argv[1])) {//arg[0]=./caesar & arg[1]=whatever input we will give
        //convert user input string into int
        int key = atoi(argv[1]);

        //store user input into plaintext and make a new char array (string) with the same length as plaintext
        string plainText = get_string("plaintext: ");
        char cipherText[strlen(plainText)];
        strcpy(cipherText, plainText);

        //making cipher text from plain text here
        for(int i = 0; i < strlen(cipherText); i++) {
            //making sure to only change the alphabets, not the special characters
            if((cipherText[i] >= 'a' && cipherText[i] <= 'z') || (cipherText[i] >= 'A' && cipherText[i] <= 'Z')){
                //if lowercase alphabets
                if ((cipherText[i] >= 'a' && cipherText[i] <= 'z')) {
                    cipherText[i] = (cipherText[i] + key) % 122;//122 for z
     if(cipherText[i] < 97) {//if remainder came after complition of at least one round of alphabet system
                        cipherText[i] = (cipherText[i] % 26) + 96;//rearrange by one less to a.
                            }
                    //if uppercase alphabets
                } else if ((cipherText[i] >= 'A' && cipherText[i] <= 'Z')) {
                    cipherText[i] = (cipherText[i] + key) % 90;
     if(cipherText[i] < 65) {//if remainder came after complition of at least one round of alphabet system
                        cipherText[i] = (cipherText[i] % 26) + 64;//rearrange by one less to A.
                    }
                }
            }
        }

        printf("ciphertext: %s\n", cipherText);
        return 0;
    } else {//else as invalid input so reminder for user to give valid input
        printf("Usage: ./caesar key\n");
        return 1;
    }

}

//this function checks if the string is a decimal digit
bool isDigit(string s) {
    for(int i = 0; i < strlen(s); i++) {
        //checks if the character is between 0-9 and returns false if it's not.
        if(!(s[i] >= '0' && s[i] <= '9')) {
            return false;//as there is an alphabet
        }
    }

    return true;//just number not even a space.
}
