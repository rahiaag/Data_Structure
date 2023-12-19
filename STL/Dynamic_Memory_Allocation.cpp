/*
the term "dynamic" is often used to describe features or behavior that allows for flexibility, adaptability, or runtime changes in a program.                       


Dynamic memory allocation refers to the process of allocating and deallocating memory at runtime for storing data in a program.
It allows programs to dynamically request memory from the operating system as needed,
rather than relying solely on static memory allocation done at compile-time.



Imagine you're hosting a party at your house, and you have a fixed number of chairs, let's say 10 chairs, set up in the living room.
 Initially, you have allocated one chair for each guest you invited.
However, as the party approaches, you realize that more people are interested in attending than you initially anticipated.
 Instead of turning them away, you decide to dynamically allocate more chairs to accommodate the extra guests.
You go to a storage room where you keep spare chairs. You request additional chairs based on the number of extra guests.
 The storage room provides you with the necessary number of chairs, and you place them in the living room alongside the existing chairs.
Now, all the guests have a seat at the party, regardless of the original number of chairs you had.
 The dynamically allocated chairs allowed you to adjust to the changing circumstances and ensure that everyone could participate.
In programming terms, the fixed chairs represent static memory allocation, where a predetermined amount of memory is initially set aside.
 The additional chairs requested from the storage room represent dynamic memory allocation.
  The chairs act as memory blocks, and each guest represents a data element.
Similarly, in programming, dynamic memory allocation allows you to request memory at runtime when you need to store additional data elements.
 It provides flexibility to adjust to changing requirements, such as accommodating a varying number of elements or resizing data structures.
Remember that just as you return the borrowed chairs to the storage room once the party is over, 
in programming, it's crucial to deallocate dynamically allocated memory when it's no longer needed.
 This ensures efficient memory usage and prevents memory leaks.
*/

/*
WE use dynamic memory allocation when we have to add more element in the array or other data strunctre
*/

/*
dynamic memory allocation in c++


Dynamic memory allocation in C++ allows you to allocate memory at runtime, as opposed to static memory allocation, which occurs at compile time. C++ provides two primary operators for dynamic memory allocation: new and delete.

The new operator: It is used to allocate memory dynamically and returns a pointer to the allocated memory. Syntax:

cpp
Copy code
pointer_variable = new data_type;
Example:

cpp
Copy code
int* ptr = new int; // dynamically allocate memory for an integer
The delete operator: It is used to deallocate the memory that was previously allocated using new. Syntax:

cpp
Copy code
delete pointer_variable;
Example:

cpp
Copy code
delete ptr; // deallocate the memory pointed by ptr
Additionally, C++ also provides an array version of new and delete for dynamically allocating arrays:

Dynamic array allocation with new[]:

cpp
Copy code
pointer_variable = new data_type[size];
Example:

cpp
Copy code
int* arr = new int[5]; // dynamically allocate an array of 5 integers
Deallocating a dynamically allocated array with delete[]:

cpp
Copy code
delete[] pointer_variable;
Example:

cpp
Copy code
delete[] arr; // deallocate the dynamically allocated array
It's important to remember to deallocate dynamically allocated memory using delete or delete[] to avoid memory leaks. Failing to deallocate memory can lead to inefficient memory usage and may cause your program to run out of memory over time
*/