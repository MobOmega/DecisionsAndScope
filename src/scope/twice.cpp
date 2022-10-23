
#include <iostream>
#include <stdio.h>

using namespace std;

/*These problems are from an MIT course made available through MIT's OpenCourseware

1) What happens if we declare the same name twice within a block, giving it two different meanings?
Hints: Did your program compile? If so, what does it print? If not, what error message do you get?

2) What happens if we declare a variable in a block, and then redeclare that same variable in a block nested within that block?
Hints: Did your program compile? If it does, what does the program output? If not, what error message does it produce?

3) Suppose a variable has two different declarations, one in an outer block and one in a nested inner block. If the name is accessed within the inner block, which declaration is used?

4) Suppose a variable has two different declarations, one in an outer block and one in a nested inner block. If the name is accessed within the outer block, but after the inner block, which declaration is used?

5) Why will this code not compile?
using namespace std;

int main()
{
    cout << "Hello, World!\n";
    return 0;
}

#include <iostream>
By moving which line can we get the code to compile?
*/

int main() {

    // Question 1
    int arg1;
    arg1 = -1;
    int x, y, z;
    char myDouble = '5';
    char arg1 = 'A';
    cout << arg1 << "\n";
    return 0;
    // I got an error that prevented the program from compiling, citing an error of "conflicting declaration".

    // Question 2
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
        cout << arg1 << "\n";
    }
    return 0;
    // Compiiled, produced an output of "A".

    // Question 3
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
        cout << arg1 << "\n";
    }
    return 0;
    // It will access the variable declaration in the inner block.

    // Question 4
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
    }
    cout << arg1 << "\n";
    return 0;
    // It will access the variable declaration in the outer block,
    // since the inner block has a limited scope.

    // Question 5
    // Moving the #include <iostream> line before the main function, so the library iostream is included and cout does not produce an error.

}