#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
#define BUFSIZE 256


//void encodeShellString(const char* input, char* output, size_t output_size)
void encodeShellString(const char* input, char* output){
 /*   const char* dangerous_chars = ";&|><$`!{}[]()\"'\\";
    size_t out_index = 0;

    for (size_t i = 0; input[i] != '\0' && out_index < output_size - 1; ++i) {
        // If the character is dangerous, prepend it with a backslash
        if (strchr(dangerous_chars, input[i]) != NULL && out_index < output_size - 2) {
            output[out_index++] = '\\';
        }
        // Copy the character to the output buffer
        output[out_index++] = input[i];
    }
    output[out_index] = '\0'; 
*/
}

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) { 
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }
    char cmd[BUFSIZE] = "wc -c < ";
    char encoded_arg[BUFSIZE] = "";

    // Encode the file address input to mitigate command-line injection
    //encodeShellString(argv[1], encoded_arg, BUFSIZE);
    encodeShellString(argv[1], encoded_arg);
    // strcat(cmd, argv[1]);
    // concatenate using strncat instead of strcat, and check byte size of what's copied to prevent buffer overflow
    if (strncat(cmd, encoded_arg, BUFSIZE - strlen(cmd) - 1) == NULL) {
        fprintf(stderr, "Error: File path too long.\n");
        return -1;
    }
    system(cmd);
    // Execute the encoded shell command, error msg to user if command can't be executed
    /*int result = system(cmd);
    if (result == -1) {
        fprintf(stderr, "Error: Failed to execute command.\n");
        return -1;
    }*/
    return 0;
}
