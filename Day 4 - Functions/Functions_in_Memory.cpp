/*
        ~~~Functions in Memory 

        When a function is called:
            - Memory is allocated in the STACK
            - Each function call gets its own stack frame


        Stack Frame contains:
            - Function parameters
            - Local variables
            - Return address (where to go back after function ends)


        Function Call Flow:
            main() → function call → function execution → return to main()


        Local Variables:
            - Stored in stack memory
            - Created when function is called
            - Destroyed when function ends

        Parameters:
            - Passed to function via stack
            - Pass by value → copy stored
            - Pass by reference → address stored

        Return Value:
            - Sent back to calling function
            - Stored temporarily in stack/register

        Recursion & Memory:
            - Each recursive call creates a NEW stack frame
            - Too many calls → Stack Overflow

        Heap vs Stack (Functions perspective):
            - Stack: function calls, local variables (fast, automatic)
            - Heap: dynamic memory (new / malloc)
*/
