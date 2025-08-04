# Boom Game (C++)

A simple terminal-based implementation of the classic "Boom" counting game, where players must say "Boom" instead of any number that is a multiple of 5.

## 🔹 Game Rules
- The game starts with a number.
- The computer responds with the next number, or says **"Boom"** if it's a multiple of 5.
- You must continue the sequence:
  - Say the next correct number.
  - Or say **"Boom"** if the number is a multiple of 5.
- You lose if:
  - You say a multiple of 5 as a number.
  - You break the correct counting sequence.
  - You enter invalid input.

## 💻 Features
- Console-based interaction.
- Turn-based play between user and computer.
- Input validation and instant feedback.
- Automatic game termination on rule violation.

## 📂 File Structure
```
Boom-Game/
├── BoomGame.cpp       # Main source code
└── README.md          # Project description
```

## ▶️ How to Run
1. Open your terminal or command prompt.
2. Compile the code using:
   ```bash
   g++ BoomGame.cpp -o boom
   ```
3. Run the program:
   ```bash
   ./boom
   ```

## 🧠 What You’ll Learn
- C++ basics: functions, loops, conditionals, and strings.
- Input validation using `cin` and error handling.
- Simple game logic and user interaction.

## ✍️ Author
**Saif Emara**  
[GitHub](https://github.com/saif-emara) | [LinkedIn](https://www.linkedin.com/in/saif-emara-51a777377)

---
