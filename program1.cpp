#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <complex>
#include <time.h>
#include <stack>
using namespace std;

/* Stack in C++ STL

Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and (top) an element is removed from that end only.
 
The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1)

*/

int main(int argc, char *argv[])
{

    if (argc > 3)
    {
         stack< std::complex<double> > mystack;

        int n = stoi(argv[1]);
        int m = abs(stof(argv[2]));
        int k = stoi(argv[3]);

        srand(time(NULL) * (m + 1));
       

        for (int i = 0; n > i; i++)
        {
            float re = rand() % 10000;

            float im = rand() % 300000;

            std::complex<double> mycomplex(re, im);
            mystack.push(mycomplex);

            if ( i % k == 0)
            {
                printf("%f %fi,", real(mycomplex), imag(mycomplex));
            } else {
                printf("%f %fi\n", real(mycomplex), imag(mycomplex));
            }
         }
  
         
    }
    else
    {
        cout << "usage: program1 <int> <int> <int>" << endl;
    }
    return 0;
}