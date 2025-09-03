I created a program that asks for and repeats back the name of the item the user is attempting to purchase, the price of said item, and the quantity. 

I did so by asking the user a question regarding the item, price, and quantity, then immediately using cin  to prompt the user for information that the code will need to run. 

I used a string when asking for the item name as a char would be insufficient and a double, float, or int would not accept characters. 

I used a double for the price since the price may not necessarily be a whole number (f.e. $3.19). 

I used an integer for the quantity since you can only have whole numbers as your quantity (can't have half of an egg). 

I multiplied the price and quantity of the item to get the user's total cost. 

Additionally, I added spaces between lines to make the output look cleaner.
