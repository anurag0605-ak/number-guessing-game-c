# number-guessing-game-c
A simple console-based number guessing game written in C. The player has to guess a randomly generated number between 1 and 100, with the program providing feedback on whether the guess is too high or too low. This project demonstrates basic C programming skills including random number generation, loops, and user input handling.

Game Rules:

The program selects a random number between 1 and 100.
You need to guess the number. After each guess, the program will tell you if your guess is too high, too low, or correct.
The game continues until you guess the correct number.
The program will also tell you how many attempts it took to guess the correct number.

How It Works:

Random number generation: The game generates a random number between 1 and 100 using the rand() function in C, seeded by the current time.
User input: The player inputs their guess, and the program compares it to the generated number.
Feedback: After each guess, the program gives feedback, guiding the player to adjust their next guess.
