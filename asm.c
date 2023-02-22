#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *convertToBinaryOpcode(char instruction[]) {
    char *return_digit = malloc(sizeof(char) * 5);  // allocate memory for the string

    if (strcmp(instruction, "ADD") == 0) {
        strcpy(return_digit, "0000");
    } else if ((strcmp(instruction, "SUB") == 0)) {
        strcpy(return_digit, "0001");
    } else if (strcmp(instruction, "AND") == 0) {
        strcpy(return_digit, "0010");
    } else if (strcmp(instruction, "ORR") == 0) {
        strcpy(return_digit, "0011");
    } else if (strcmp(instruction, "EOR") == 0) {
        strcpy(return_digit, "0100");
    } else if (strcmp(instruction, "LSL") == 0) {
        strcpy(return_digit, "0101");
    } else if (strcmp(instruction, "LSR") == 0) {
        strcpy(return_digit, "0110");
    } else if (strcmp(instruction, "ASR") == 0) {
        strcpy(return_digit, "0111");
    } else if (strcmp(instruction, "LDR") == 0) {
        strcpy(return_digit, "1000");
    } else if (strcmp(instruction, "STR") == 0) {
        strcpy(return_digit, "1001");
    } else if (strcmp(instruction, "CMP") == 0) {
        strcpy(return_digit, "1010");
    } else if (strcmp(instruction, "MOV") == 0) {
        strcpy(return_digit, "1011");
    } else if (strcmp(instruction, "B") == 0) {
        strcpy(return_digit, "1100");
    } else if (strcmp(instruction, "BEQ") == 0) {
        strcpy(return_digit, "1101");
    } else if (strcmp(instruction, "END") == 0) {
        strcpy(return_digit, "1110");
    } else if (strcmp(instruction, "NOP") == 0) {
        strcpy(return_digit, "1111");
    }

    return return_digit;
}

char *get_registers(char registers[]) {
    char *return_digit = malloc(sizeof(char) * 5);  // allocate memory for the string
    if (strcmp(registers, "R0") == 0) {
        strcpy(return_digit, "0000");
    } else if (strcmp(registers, "R1") == 0) {
        strcpy(return_digit, "0001");
    } else if (strcmp(registers, "R2") == 0) {
        strcpy(return_digit, "0010");
    } else if (strcmp(registers, "R3") == 0) {
        strcpy(return_digit, "0011");
    } else if (strcmp(registers, "R4") == 0) {
        strcpy(return_digit, "0100");
    } else if (strcmp(registers, "R5") == 0) {
        strcpy(return_digit, "0101");
    } else if (strcmp(registers, "R6") == 0) {
        strcpy(return_digit, "0110");
    } else if (strcmp(registers, "R7") == 0) {
        strcpy(return_digit, "0111");
    } else if (strcmp(registers, "R8") == 0) {
        strcpy(return_digit, "1000");
    } else if (strcmp(registers, "R9") == 0) {
        strcpy(return_digit, "1001");
    } else if (strcmp(registers, "R10") == 0) {
        strcpy(return_digit, "1010");
    } else if (strcmp(registers, "R11") == 0) {
        strcpy(return_digit, "1011");
    } else if (strcmp(registers, "R12") == 0) {
        strcpy(return_digit, "1100");
    } else if (strcmp(registers, "R13") == 0) {
        strcpy(return_digit, "1101");
    } else if (strcmp(registers, "R14") == 0) {
        strcpy(return_digit, "1110");
    } else if (strcmp(registers, "R15") == 0) {
        strcpy(return_digit, "1111");
    }

    if (strcmp(registers, "[R0]") == 0) {
        strcpy(return_digit, "0000");
    } else if (strcmp(registers, "[R1]") == 0) {
        strcpy(return_digit, "0001");
    } else if (strcmp(registers, "[R2]") == 0) {
        strcpy(return_digit, "0010");
    } else if (strcmp(registers, "[R3]") == 0) {
        strcpy(return_digit, "0011");
    } else if (strcmp(registers, "[R4]") == 0) {
        strcpy(return_digit, "0100");
    } else if (strcmp(registers, "[R5]") == 0) {
        strcpy(return_digit, "0101");
    } else if (strcmp(registers, "[R6]") == 0) {
        strcpy(return_digit, "0110");
    } else if (strcmp(registers, "[R7]") == 0) {
        strcpy(return_digit, "0111");
    } else if (strcmp(registers, "[R8]") == 0) {
        strcpy(return_digit, "1000");
    } else if (strcmp(registers, "[R9]") == 0) {
        strcpy(return_digit, "1001");
    } else if (strcmp(registers, "[R10]") == 0) {
        strcpy(return_digit, "1010");
    } else if (strcmp(registers, "[R11]") == 0) {
        strcpy(return_digit, "1011");
    } else if (strcmp(registers, "[R12]") == 0) {
        strcpy(return_digit, "1100");
    } else if (strcmp(registers, "[R13]") == 0) {
        strcpy(return_digit, "1101");
    } else if (strcmp(registers, "[R14]") == 0) {
        strcpy(return_digit, "1110");
    } else if (strcmp(registers, "[R15]") == 0) {
        strcpy(return_digit, "1111");
    }
    return return_digit;
}

int is_valid_letter(char s[]) {
    char character;
    character = s[0];
    if (character == '#') {
        return 2;
    }
    if (character == '\n') {
        return 2;                             // is value is equal to two is either new line or comment either way ignore
    }
    int return_value = 1;                   // if 1 it means that it is lowercase letter
    int i = 0;
    while (character != '\0') {
        character = s[i];
        if (isupper(character)) {
            return_value = 0;               // 0 means it is upper case letter
        }
        i++;
    }
    return return_value;
}

char *hexToBinary(char *hex) {
    char *binary = (char *) malloc((4 * strlen(hex) + 1) * sizeof(char)); // maximum number of bits for each hex digit
    int i = 0;

    while (hex[i]) {
        switch (hex[i]) {
            case '0':
                strcat(binary, "0000");
                break;
            case '1':
                strcat(binary, "0001");
                break;
            case '2':
                strcat(binary, "0010");
                break;
            case '3':
                strcat(binary, "0011");
                break;
            case '4':
                strcat(binary, "0100");
                break;
            case '5':
                strcat(binary, "0101");
                break;
            case '6':
                strcat(binary, "0110");
                break;
            case '7':
                strcat(binary, "0111");
                break;
            case '8':
                strcat(binary, "1000");
                break;
            case '9':
                strcat(binary, "1001");
                break;
            case 'A':
            case 'a':
                strcat(binary, "1010");
                break;
            case 'B':
            case 'b':
                strcat(binary, "1011");
                break;
            case 'C':
            case 'c':
                strcat(binary, "1100");
                break;
            case 'D':
            case 'd':
                strcat(binary, "1101");
                break;
            case 'E':
            case 'e':
                strcat(binary, "1110");
                break;
            case 'F':
            case 'f':
                strcat(binary, "1111");
                break;
            default:
                printf("Invalid hexadecimal digit %c\n", hex[i]);
                free(binary);
                return NULL;
        }
        i++;
    }
    return binary;
}

void to_upper_case(char s[]) {
    signed char character;
    character = s[0];
    int i = 0;
    while (character != '\0') {
        character = s[i];
        if (islower(character)) {
            s[i] = toupper(character);
        }
        i++;
    }
}

void to_upper_case_register(char r[]) {
    char character;
    character = r[0];

    if (islower(character)) {
        r[0] = toupper(character);
    } else {
        return;
    }

}

void populate_array_instruction(char opcode[], char instruction_array[]) {
    instruction_array[0] = opcode[0];
    instruction_array[1] = opcode[1];
    instruction_array[2] = opcode[2];
    instruction_array[3] = opcode[3];
}

void populate_first_registers(const char register_binary[], char instruction_array[]) {

    instruction_array[4] = register_binary[0];
    instruction_array[5] = register_binary[1];
    instruction_array[6] = register_binary[2];
    instruction_array[7] = register_binary[3];
}

void populate_second_registers(const char register_binary[], char instruction_array[]) {
    instruction_array[8] = register_binary[0];
    instruction_array[9] = register_binary[1];
    instruction_array[10] = register_binary[2];
    instruction_array[11] = register_binary[3];
}

void populate_third_registers(const char register_binary[], char instruction_array[]) {
    instruction_array[12] = register_binary[0];
    instruction_array[13] = register_binary[1];
    instruction_array[14] = register_binary[2];
    instruction_array[15] = register_binary[3];
}

char *removeFirstTwo(char *arr) {
    char *result = (char *) malloc((strlen(arr) - 2 + 1) * sizeof(char)); // allocate space for new array

    strcpy(result, arr + 2); // copy string starting from the third character to the new array

    return result;
}

void flip_characters(char final_instructions[]) {
    char temp, first, second;
    temp = final_instructions[3];
    final_instructions[3] = final_instructions[2];
    final_instructions[2] = temp;

}

int64_t dec_to_twos_complement(int64_t dec_num) {
    int64_t mask = 0x8000000000000000; // mask to get MSB of 64-bit integer
    int64_t twos_complement = 0;

    // check if the decimal number is negative
    if (dec_num < 0) {
        // convert the decimal number to its absolute value
        dec_num = -dec_num;

        // take the one's complement of the decimal number
        int64_t ones_complement = ~dec_num;

        // add 1 to the one's complement to get the two's complement
        twos_complement = ones_complement + 1;
    } else {
        twos_complement = dec_num;
    }

    // check if the MSB of the two's complement is set (i.e., the two's complement is negative)
    if (twos_complement & mask) {
        // if so, set all the higher-order bits to 1 to ensure that the 8-byte two's complement is correctly represented
        twos_complement |= 0xFFFFFFFFFFFFFFFF ^ 0x7FFFFFFFFFFFFFFF;
    }

    return twos_complement;
}

int count_elements(char arr[]) {
    int count = 0;
    // Loop through the array until the null terminator is reached
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

char *binary_to_hex(const char *binary_value) {
    int len = strlen(binary_value);
    int i = 0;
    char hex_value[5];
    char *result = malloc(5);

    // Convert binary to hex
    while (i < len) {
        // Get 4-bit group
        char group[5];
        strncpy(group, binary_value + i, 4);
        group[4] = '\0';

        // Convert binary group to hex character
        int dec_value = strtol(group, NULL, 2);
        if (dec_value < 10) {
            hex_value[i / 4] = dec_value + '0';
        } else {
            hex_value[i / 4] = dec_value - 10 + 'a';
        }

        i += 4;
    }

    // Add null terminator to hex string
    hex_value[4] = '\0';

    // Copy hex string to heap-allocated string to return
    strcpy(result, hex_value);

    return result;
}

void capitalize_letters(char *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (isalpha(arr[i])) {
            arr[i] = toupper(arr[i]);
        }
    }
}


int main() {

    char instructions_array[17] = "0000000000000000"; // initialize the array    return 0;
    long int length = sizeof(instructions_array) / sizeof(instructions_array[0]);
    char character;

    // Registers
    char instruction[4] = "0000";
    char register_one[4] = "0000";
    char register_two[4] = "0000";
    char register_three[4] = "0000";
    char constant[7] = "0000000";
    char hex_constant[4] = "0000";


    while (scanf("%s[^#\n]#", instruction) != EOF) {

//        scanf("%4s", instruction);
//        printf("Instruction: %s\n", instruction);

        to_upper_case(instruction);
        int is_valid_instruction = is_valid_letter(instruction);


        if (strcmp(instruction, "ADD") == 0) {
            scanf("%4s %4s %4s", register_one, register_two, register_three);
            to_upper_case_register(register_one);
            to_upper_case_register(register_two);
            to_upper_case_register(register_three);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);
            char *third_register_binary = get_registers(register_three);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
            populate_third_registers(third_register_binary, instructions_array);
        } else if (strcmp(instruction, "SUB") == 0) {
            scanf("%4s %4s %4s", register_one, register_two, register_three);

            to_upper_case_register(register_one);
            to_upper_case_register(register_two);
            to_upper_case_register(register_three);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);
            char *third_register_binary = get_registers(register_three);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
            populate_third_registers(third_register_binary, instructions_array);
        } else if (strcmp(instruction, "AND") == 0) {
            scanf("%4s %4s %4s", register_one, register_two, register_three);

            to_upper_case_register(register_one);
            to_upper_case_register(register_two);
            to_upper_case_register(register_three);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);
            char *third_register_binary = get_registers(register_three);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
            populate_third_registers(third_register_binary, instructions_array);
        } else if (strcmp(instruction, "ORR") == 0) {
            scanf("%4s %4s %4s", register_one, register_two, register_three);

            to_upper_case_register(register_one);
            to_upper_case_register(register_two);
            to_upper_case_register(register_three);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);
            char *third_register_binary = get_registers(register_three);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
            populate_third_registers(third_register_binary, instructions_array);
        } else if (strcmp(instruction, "EOR") == 0) {
            scanf("%4s %4s %4s", register_one, register_two, register_three);

            to_upper_case_register(register_one);
            to_upper_case_register(register_two);
            to_upper_case_register(register_three);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);
            char *third_register_binary = get_registers(register_three);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
            populate_third_registers(third_register_binary, instructions_array);
        } else if (strcmp(instruction, "LSL") == 0) {
            scanf("%4s %4s %4s", register_one, register_two, register_three);

            to_upper_case_register(register_one);
            to_upper_case_register(register_two);
            to_upper_case_register(register_three);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);
            char *third_register_binary = get_registers(register_three);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
            populate_third_registers(third_register_binary, instructions_array);

        } else if (strcmp(instruction, "LSR") == 0) {
            scanf("%4s %4s %4s", register_one, register_two, register_three);

            to_upper_case_register(register_one);
            to_upper_case_register(register_two);
            to_upper_case_register(register_three);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);
            char *third_register_binary = get_registers(register_three);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
            populate_third_registers(third_register_binary, instructions_array);

        } else if (strcmp(instruction, "LSR") == 0) {
            scanf("%4s %4s %4s", register_one, register_two, register_three);

            to_upper_case_register(register_one);
            to_upper_case_register(register_two);
            to_upper_case_register(register_three);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);
            char *third_register_binary = get_registers(register_three);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
            populate_third_registers(third_register_binary, instructions_array);

        } else if (strcmp(instruction, "ASR") == 0) {
            scanf("%4s %4s %4s", register_one, register_two, register_three);

            to_upper_case_register(register_one);
            to_upper_case_register(register_two);
            to_upper_case_register(register_three);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);
            char *third_register_binary = get_registers(register_three);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
            populate_third_registers(third_register_binary, instructions_array);

        } else if (strcmp(instruction, "LDR") == 0) {
            scanf("%4s %4s", register_one, register_two);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
        } else if (strcmp(instruction, "STR") == 0) {
            scanf("%4s %4s", register_one, register_two);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
        } else if (strcmp(instruction, "CMP") == 0) {
            scanf("%4s %4s", register_one, register_two);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *first_register_binary = get_registers(register_one);
            char *second_register_binary = get_registers(register_two);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(first_register_binary, instructions_array);
            populate_second_registers(second_register_binary, instructions_array);
        } else if (strcmp(instruction, "MOV") == 0) {
            scanf("%4s %4s", register_one, constant);

            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *register_binary = get_registers(register_one);
            char *first_two_removed = removeFirstTwo(constant);
            char *constant_binary = hexToBinary(first_two_removed);

            populate_array_instruction(instruction_binary,
                                       instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
            populate_first_registers(register_binary, instructions_array);
            populate_second_registers(constant_binary, instructions_array);

        } else if (strcmp(instruction, "B") == 0) {
            scanf("%5s", constant);
            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *register_binary = get_registers(register_one);
            char *first_two_removed = removeFirstTwo(constant);
            char *constant_binary = hexToBinary(first_two_removed);
            char one[5] = "0000";

            int number_of_elements = count_elements(first_two_removed);
            populate_array_instruction(instruction_binary,instructions_array);

            if (number_of_elements == 1 ) {
                populate_array_instruction(instruction_binary,instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
                populate_first_registers(one, instructions_array);
                populate_second_registers(one,instructions_array);
                populate_third_registers(constant_binary,instructions_array);
            } else if(number_of_elements == 2){
                char first_character = first_two_removed[0];
                char second_character = first_two_removed[1];
                char* first_character_binary = &first_character;
                char* second_character_binary = &second_character;

                char *first_hex_to_binary = hexToBinary(first_character_binary);
                char *second_hex_to_binary = hexToBinary(second_character_binary);

                populate_first_registers(one, instructions_array);
                populate_second_registers(first_character_binary,instructions_array);
                populate_third_registers(second_character_binary,instructions_array);
            } else if (number_of_elements == 3) {
                char  first_character = first_two_removed[0];
                char  second_character = first_two_removed[1];
                char  third_character = first_two_removed[2];


                char first_char = first_character; // the character to pass
                char temp_arr[2]; // temporary array
                temp_arr[0] = first_character;
                temp_arr[1] = '\0'; // add null terminator

                char second_char = second_character; // the character to pass
                char temp_arr1[2]; // temporary array
                temp_arr1[0] = second_char;
                temp_arr1[1] = '\0'; // add null terminator

                char third_char = third_character; // the character to pass
                char temp_arr2[2]; // temporary array
                temp_arr2[0] = third_char;
                temp_arr2[1] = '\0'; // add null terminator

                char *first_hex_to_binary =  hexToBinary(temp_arr);
                char *second_hex_to_binary = hexToBinary(temp_arr1);
                char *third_hex_to_binary = hexToBinary(temp_arr2);

                populate_first_registers(first_hex_to_binary, instructions_array);
                populate_second_registers(second_hex_to_binary,instructions_array);
                populate_third_registers(third_hex_to_binary,instructions_array);
            }
        } else if (strcmp(instruction, "BEQ") == 0) {

            scanf("%4s", constant);
            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            char *register_binary = get_registers(register_one);
            char *first_two_removed = removeFirstTwo(constant);
            char *constant_binary = hexToBinary(first_two_removed);
            char one[5] = "0000";

            int number_of_elements = count_elements(first_two_removed);

            if (number_of_elements == 1 ) {
                populate_array_instruction(instruction_binary,instructions_array); // puts in the binary of the instruction into the first 4 bytes of the array
                populate_first_registers(one, instructions_array);
                populate_second_registers(one,instructions_array);
                populate_third_registers(constant_binary,instructions_array);
            } else if(number_of_elements == 2){
                char first_character = first_two_removed[0];
                char second_character = first_two_removed[1];
                char* first_character_binary = &first_character;
                char* second_character_binary = &second_character;

                char *first_hex_to_binary = hexToBinary(first_character_binary);
                char *second_hex_to_binary = hexToBinary(second_character_binary);

                populate_first_registers(one, instructions_array);
                populate_second_registers(first_character_binary,instructions_array);
                populate_third_registers(second_character_binary,instructions_array);
            } else if (number_of_elements == 3) {
                char first_character = first_two_removed[0];
                char second_character = first_two_removed[1];
                char third_character = first_two_removed[2];
                char* first_character_binary = &first_character;
                char* second_character_binary = &second_character;
                char* third_character_binary = & third_character;

                char *first_hex_to_binary = hexToBinary(first_character_binary);
                char *second_hex_to_binary = hexToBinary(second_character_binary);
                char *third_hex_to_binary = hexToBinary(third_character_binary);

                populate_first_registers(first_hex_to_binary, instructions_array);
                populate_second_registers(second_hex_to_binary,instructions_array);
                populate_third_registers(third_hex_to_binary,instructions_array);
            }

        } else if (strcmp(instruction, "END") == 0) {
            char *instruction_binary = convertToBinaryOpcode(instruction); // gets the binary of the instruction
            populate_array_instruction(instruction_binary, instructions_array);
            printf("E000");

        }

        char *hex_value = binary_to_hex(instructions_array);
        capitalize_letters(hex_value, length);
        if (strcmp(instruction, "MOV") == 0) {
            flip_characters(hex_value);
        }
        if (strcmp(instruction,"END") !=0) {
            printf("%s", hex_value);
        }



    }
    return 0;
}
