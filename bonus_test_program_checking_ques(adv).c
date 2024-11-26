#include <stdio.h>
#include <string.h>

#define MAX_PROGRAM_LENGTH 10000

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    getchar();  // Consume the newline character after the number of test cases
    
    // Process each test case
    for (int t = 0; t < T; t++) {
        char program[MAX_PROGRAM_LENGTH];
        fgets(program, sizeof(program), stdin);
        
        // Remove the trailing newline character from fgets
        program[strcspn(program, "\n")] = '\0';
        
        int length = strlen(program);
        
        // Check if program starts and ends with '{' and '}'
        if (program[0] != '{' || program[length - 1] != '}') {
            printf("Compilation Errors\n");
            continue;
        }
        
        int function_stack = 0;   // 0: no function, 1: inside main, 2: inside user-defined function
        int loop_stack = 0;       // Keep track of the number of nested loops
        
        int in_main = 0;          // 0: not in main, 1: inside main function
        int in_user_function = 0; // 0: not in user function, 1: inside user function
        int user_function_instruction_count = 0;
        
        // Process each character inside the program (skip the first and last curly braces)
        int is_valid = 1; // Flag to check if the program is valid

        for (int i = 1; i < length - 1; i++) {
            char current = program[i];
            
            if (current == '<') {  // Start of main function
                if (in_main || in_user_function) {
                    is_valid = 0;
                    break;  // Compilation error: Can't have multiple main functions or nested functions
                }
                in_main = 1;  // Now inside the main function
                function_stack = 1;
            } 
            else if (current == '>') {  // End of main function
                if (!in_main) {
                    is_valid = 0;
                    break;  // Compilation error: No matching '<' for '>'
                }
                in_main = 0;  // Now outside the main function
                function_stack = 0;
            } 
            else if (current == '(') {  // Start of user-defined function
                if (in_user_function || in_main) {
                    is_valid = 0;
                    break;  // Compilation error: Can't define function inside another function
                }
                in_user_function = 1;  // Now inside a user function
                function_stack = 2;     // Mark that we're inside a user-defined function
                user_function_instruction_count = 0;  // Reset the instruction count for the new function
            } 
            else if (current == ')') {  // End of user-defined function
                if (!in_user_function) {
                    is_valid = 0;
                    break;  // Compilation error: No matching '(' for ')'
                }
                if (user_function_instruction_count > 100) {
                    is_valid = 0;
                    break;  // Compilation error: User-defined function exceeds instruction limit
                }
                in_user_function = 0;  // Now outside the user-defined function
                function_stack = 0;
            } 
            else if (current == '{') {  // Start of a loop
                if (function_stack == 0) {
                    is_valid = 0;
                    break;  // Compilation error: Loop outside any function
                }
                loop_stack++;  // Track loop nesting
            } 
            else if (current == '}') {  // End of a loop
                if (loop_stack == 0) {
                    is_valid = 0;
                    break;  // Compilation error: No matching '{' for '}'
                }
                loop_stack--;  // Close the loop
            } 
            else if (current == 'P') {  // Instruction
                if (in_user_function) {
                    user_function_instruction_count++;  // Count instructions in the user function
                }
            } 
            else {
                is_valid = 0;
                break;  // Compilation error: Invalid character found
            }
        }
        
        // Final validation: Check if there are unmatched loops or functions
        if (loop_stack != 0 || function_stack != 0) {
            is_valid = 0;
        }
        
        // Print the result based on validity
        if (is_valid) {
            printf("No Compilation Errors\n");
        } else {
            printf("Compilation Errors\n");
        }
    }
    
    return 0;
}

