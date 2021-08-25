# Encryption and Decryption Project
That program is able to encrypt or decrypt the (Upper or Lower) String.
## Simple Substitution Encryption
* In this encryption we used a variable (key) as a secret between the sender and the reciever.
* We also used a variable (length) and strlen from (string.h) to know the length of the string.
* And we used an array (s) to store the string.
### Functions:
1. Encryption_Upper: In this function we can encrypt the string for upper case letters.
2. Decryption_Upper: In this function we can decrypt the string for upper case letters.
3. Encryption_Lower: In this function we can encrypt the string for lower case letters.
4. Decryption_Lower: In this function we can decrypt the string for lower case letters.
### The main program:
* It starts with a while loop to repeat the choices.
* Inside the loop it prints the choices that the user should choice one of them.
* Then the user put a number (from 1 to 5) to choice the type of encryption or decryption or exit the program, then he puts the string.
* The program store the string and implement the function that encrypt or decrypt the string.
* We used switch to control what happend when the user put a number.