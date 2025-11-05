I created the class BankAccount and started the balance at $0. 

I then created functions for depositing, withdrawing, purchasing, displaying balance, and displaying purchase history. 

I tracked all of these transactions by creating a file called "transactions.txt" and saved all information for both successful and failed transactions to the file. This file retrieved, wrote, and stored transaction information. 

I made sure to inform the user everytime a deposit, withdrawal, purchase, or any other request was made while also saving it to the file. 

I made sure that the program and file would accurately track information while properly adding, subtracting, and multiplying integers/doubles. 

Additionally, I added if-statements to exit the function given the condition amount/cost > balance for withdrawing and purchasing to ensure that the user could not withdraw/spend money they did not have. 

 I made sure to close the file after appending to stop memory allocation and prevent data loss after use. 

 I also added an extra if-statement in the transactionHistory function to ensure that the user could not randomly access someone else's data/transaction history, only their own. 

 I then created a main function where I could run all of the commands for item(s), amount/cost, and quantity. 
