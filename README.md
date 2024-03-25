# WhatsApp Group Management Program

This C++ program is designed to manage WhatsApp groups. The information of each WhatsApp group, including the names of the groups and the phone numbers of each member, is stored in a linked list.

## How to Use

1. **Compilation:** 
   - Compile the program using a C++ compiler. For example, using g++:
     ```
     g++ -o whatsapp_manager main.cpp
     ```

2. **Input File:**
   - Prepare a text file named `groups.txt` containing the information of WhatsApp groups. Each line should represent a group, with the group name followed by the number of members, and then the phone numbers of each member separated by spaces.

     Example `groups.txt`:
     ```
     family 3
     05321112222
     05423334444
     05556667777
     friends 2
     05551112222
      05444445555
     ```

3. **Execution:**
   - Run the compiled program:
     ```
     ./whatsapp_manager
     ```

4. **Options:**
   - Upon execution, you'll be prompted with options:
     - `Change`: Allows you to change the phone number of a person in all groups.
     - `List`: Lists the phone numbers of a specified group.
     - `Quit`: Quits the program.

## Dependencies
- `unordered.h`: This header file defines the `unorderedLinkedList` class used for managing linked lists.

## Notes
- The maximum number of groups is set to 10.
- Ensure proper formatting of the input file for correct program execution.

