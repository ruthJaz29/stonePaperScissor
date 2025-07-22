# 🪨📄✂️ Stone-Paper-Scissors (C Language Game)

## 🎮 Description
This is a simple **Stone-Paper-Scissors** game implemented in **C**. The user plays against the machine in a **best of 3** format. The machine's choices are randomly generated using `rand()`, and the user provides input via the terminal.

---

## 🧠 Game Rules
- The game is played for **3 rounds**.
- The machine and user can choose one of the following:
  - `'s'` → Stone
  - `'p'` → Paper
  - `'x'` → Scissors
- **Winning logic:**
  - Paper (`p`) beats Stone (`s`)
  - Stone (`s`) beats Scissors (`x`)
  - Scissors (`x`) beats Paper (`p`)
- If both choose the same, it's a **tie**.

---

## 🧪 Sample Gameplay
```
Let's play Stone, Paper, Scissors!
Best of 3 rounds.
ONLY SMALL LETTERS
Type 's' for STONE, 'p' for PAPER, 'x' for SCISSORS
Enter your choice: p
User - p and Machine - s
User WINS this round!
Score - User: 1, Machine: 0
...
```

---

## ⚙️ How It Works
- The `main()` function seeds the random number generator and starts the game.
- `rNum()` returns a random number between 0 and 100.
- `macChoice()` maps that number to a machine choice (`s`, `p`, `x`).
- `calWin()` runs 3 rounds, compares choices, and keeps score.

---

## 📦 How to Run
1. Compile using GCC or any C compiler:
   ```bash
   gcc game.c -o game
   ```
2. Run the executable:
   ```bash
   ./game
   ```

---

## 🛠 Requirements
- C Compiler (GCC or compatible)
- Works on Linux/Mac/Windows (with terminal/command prompt)

---

## ✅ Features
- Random machine moves using `rand()`
- Simple score tracking
- Console-based interaction

---

## 🚀 Future Ideas
- Add a menu for replaying the game
- Track overall win stats across sessions
- Support both upper and lowercase inputs
- Add ASCII art for more fun!
