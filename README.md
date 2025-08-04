# Boom Game (C++)

A simple console-based implementation of the classic "Boom" game using C++. This project demonstrates basic logic, input validation, and condition-based rules — great as a beginner-level project.

## 🔥 Game Rules

- The game starts from a user-entered number.
- The computer responds with the next number (or says "Boom" if it’s a multiple of 5).
- You must continue counting — unless it's a multiple of 5, then type **"Boom"**.
- If you enter a multiple of 5 or the wrong number, you lose.
- The game continues until the user makes a mistake.

## 📌 Features

- Validates input using `cin` and `try-catch`.
- Identifies multiples of 5 with modulus `%`.
- Clear turn-by-turn interaction between computer and user.
- Loop-based gameplay with basic error handling.

## 🧠 Concepts Used

- Conditional logic and control flow
- String vs number input handling
- Functions and modular code
- Basic use of exception handling

## 🛠️ How to Run

1. Save the code in a file named: `boom_game.cpp`
2. Open a terminal in the same folder
3. Compile the code:
   ```
   g++ boom_game.cpp -o boom
   ```
4. Run the game:
   ```
   ./boom
   ```

## 📂 File Structure

```
Boom-Game/
├── boom_game.cpp
└── README.md
```

## 🙋‍♂️ Author

Made with effort by [Saif Emara](https://github.com/saif-emara) as part of a C++ project in his CS introduction semester.

