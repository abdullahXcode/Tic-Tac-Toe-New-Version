# Tic-Tac-Toe New Version

# 🎮 Tic-Tac-Toe (C++ ASCII Version)

This is a **console-based Tic-Tac-Toe game** implemented in C++.  
It follows strict requirements: only `char` and `bool` variables are used, no arrays or functions, and the game logic is built using `do-while` loops and `if-else` statements.  

The game is played by **two players**:  
- Player 1 → `X`  
- Player 2 → `O`  

The board updates after every move and is displayed using ASCII art.

---

## ✨ Features
- 3×3 grid implemented with **9 separate variables (b1 … b9)**
- Alternating turns between Player 1 and Player 2
- Input validation (row/column must be 1–3, no overwriting filled cells)
- Winner detection (rows, columns, diagonals)
- Draw detection when all 9 cells are filled
- Uses `system("cls")` to refresh the screen

---

## 🛠 Requirements
- C++ compiler (g++, MSVC, Dev-C++, Code::Blocks, etc.)
- Windows OS (uses `system("cls")`)

---

## 🚀 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/tic-tac-toe-ascii.git
