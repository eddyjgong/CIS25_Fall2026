I created classes to help read, extract, and display information (country, region, rank, score, and std error) from a CSV file that measures "World Happiness". 

I extrated at least 10 rows and 5 columns of information from the dataset. 

This was done via the Reader class that reads the CSV file line by line and splits the information into columns. 

The Reader class also organizes the information into the proper data types (strings, ints, doubles). 

The Happy class then stores the corresponding data and groups them into their own row to be read. 

Additionally, I used vectors which allows the program to manage memory as rows are added.

The vector stores all the Happy objects, records the rows of data, and then returns it to the main function. 

The main function then reads and displays all the data. 
