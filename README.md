### **Hide and Seek Game in C**

This commit introduces a simple and interactive **Hide and Seek** game implemented in C. The program allows the user to guess a randomly chosen number between 1 and 10, providing feedback on whether the guess is too high, too low, or correct.

#### **Features:**
- **Random Number Generation**: The program uses `srand()` and `rand()` to generate a random hiding spot between 1 and 10.
- **User Interaction**: The user is prompted to enter guesses, and the program provides feedback (e.g., "Too high!", "Too low!", "You found me!").
- **Replayability**: After each game, the user can choose to play again or exit.

#### **How to Play:**
1. Compile the program using a C compiler (e.g., `gcc seek.c -o seek`).
2. Run the executable (`./seek` on Linux/Mac or `seek.exe` on Windows).
3. Follow the on-screen instructions to guess the hiding spot.
4. Play as many times as you like!

#### **Code Highlights:**
- **Input Validation**: Ensures the user enters a number between 1 and 10.
- **Loop Structure**: Uses `do-while` loops for the main game and replay functionality.
- **User-Friendly Prompts**: Clear messages guide the user through the game.

#### **Example Output:**
```
Welcome to Hide and Seek!
I'm hiding somewhere between 1 and 10. Can you find me?
Enter your guess (1-10): 5
Too low! Try again.
Enter your guess (1-10): 8
Too high! Try again.
Enter your guess (1-10): 7
You found me! Great job!
Do you want to play again? (y/n): n
Thanks for playing! Goodbye!
```

#### **Dependencies:**
- Standard C libraries: `<stdio.h>`, `<stdlib.h>`, `<time.h>`.
---

