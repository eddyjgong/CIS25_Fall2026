To begin with I always make sure I have the necessary libraries and namespaces. 

I initially created the binary search function needed to look for the id the user asked for (I'm not sure what you meant by id so I assumed the array elements). 

I also made an array with a constant size of 100 in the main function. I created a loop to assign values to the array elements. 

I touched up some of the messages to the user so that it would look nicer. 

Basically what the program does is that, the while loop ensures that the id inputted by the user must be a number between 0 and 99 by repeatedly telling the user to input a number between 0 and 99.

If the number 0 is input, as stated by the program, the program would end. 

If you look at the output, you will realize the id input by the user and the index do not match, because while the size of the array is 100, the array elements are numbered 0-99, meaning it starts at 0, not at 1 so it will always be 1 off. 

Additionally, I was a bit confused by what you wanted when you said the ID, but seeing as how this week's material was about pointers and arrays, I assumed that you wanted the program to output the address of the index associated with the input ID. 

This is done, because I declared a pointer varaible named array to store the memory address of an integer. Additionally, when I established the new int[size], this dynamically allocated memory for the array of integers on the heap memory. 

Later, when outputting the ID, I decided to not only output the index associated with the ID, but the address of the index. 

The ID associated with the index is known, because I did array[i] = i + 1; which ensures that the ID is equal to the index + 1. For example, at ID 100, the index would be 99. 
