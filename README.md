
<h1 align="center">Tic-Tac-Toe in C</h1>

<p align="center">
  <strong>A classic Tic-Tac-Toe game, meticulously crafted in C by Rushi Patel.</strong>
  <br />
  Dive into this timeless duel of X's and O's, right from your terminal!
</p>



<p align="center">
  <!-- Ensure your repository is PUBLIC for these badges to work correctly for everyone -->
  <img src="https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c" alt="Language C"/>
  <img src="https://img.shields.io/badge/Platform-Console-lightgrey?style=for-the-badge&logo=gnome-terminal" alt="Platform Console"/>
 <a href="https://github.com/Rush1patel/TicTacToe-C/stargazers"><img src="https://img.shields.io/github/stars/Rush1patel/TicTacToe-C?style=for-the-badge&logo=github&label=Stars" alt="GitHub Stars"/></a>
  <a href="https://github.com/Rush1patel/TicTacToe-C/network/members"><img src="https://img.shields.io/github/forks/Rush1patel/TicTacToe-C?style=for-the-badge&logo=github&label=Forks" alt="GitHub Forks"/></a>
  <a href="https://github.com/Rush1patel/TicTacToe-C/blob/main/LICENSE"><img src="https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge" alt="License MIT"/></a>
  <a href="https://github.com/Rush1patel/TicTacToe-C/commits/main"><img src="https://img.shields.io/github/last-commit/Rush1patel/TicTacToe-C?style=for-the-badge&logo=github&label=Last%20Commit" alt="GitHub last commit"/></a>
</p>

---

## 🌟 Key Highlights

Experience the core features that make this C Tic-Tac-Toe game a solid implementation:

*   **🕹️ Classic 3x3 Gameplay:** The timeless X vs. O challenge you know and love.
*   **🔄 Interactive Turn-Based System:** Clear prompts guide Player X and Player O through their moves.
*   **🏆 Robust Win Detection:** Accurately identifies horizontal, vertical, and diagonal winning lines.
*   **🤝 Draw Game Recognition:** Correctly declares a stalemate when the board is full and no winner emerges.
*   **🛡️ Input Validation:** Ensures moves are within the 1-9 range and on unoccupied cells, prompting for a retry on invalid input.
*   **🖥️ Dynamic Board Display:** The console board refreshes after every valid move, clearly showing the current game state.
*   💡 Modular C Implementation:** Well-structured with logic separated into `main.c` (core game loop and program entry), `tictactoe.c` (game functions like board display, move handling, and win/draw logic), and `tictactoe.h` (function declarations and shared definitions), promoting better organization and maintainability.
*   **🧑‍💻 Player vs. Player:** Designed for two human players sharing the same terminal.

---

## 🎬 Gameplay in Action

  ```text
        |           |
   1    |     2     |     3
        |           |
------------------------------
        |           |
   4    |     5     |    6
        |           |
------------------------------
        |           |
   7    |     8     |     9
        |           |

Type your answer Player X : 1
        |           |
   X    |     2     |     3
        |           |
------------------------------
        |           |
   4    |     5     |    6
        |           |
------------------------------
        |           |
   7    |     8     |     9
        |           |

Type your answer Player O : 5
        |           |
   X    |     2     |     3
        |           |
------------------------------
        |           |
   4    |     O     |    6
        |           |
------------------------------
        |           |
   7    |     8     |     9
        |           |


Type your answer Player X :
```



---

## 🛠️ Tech Stack

This project is built purely with fundamental, yet powerful tools:

*   <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="C Language" width="20" height="20"/> **C Programming Language:** The core logic and engine of the game, structured into `main.c`, `tictactoe.c`, and `tictactoe.h`.
*   <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/gcc/gcc-original.svg" alt="GCC" width="20" height="20"/> **GCC (GNU Compiler Collection):** (Or your preferred C compiler like Clang) Used for compiling the `main.c` and `tictactoe.c` source files and linking them.
*   **Standard C Libraries:** `stdio.h` for input/output operations.

---

## 🚀 Getting Started

Ready to play? Follow these simple steps to get the game running on your local machine.

### Prerequisites

*   A C compiler (e.g., GCC, Clang) installed on your system.
*   Git (for cloning the repository, or you can download the `main.c`, `tictactoe.c`, and `tictactoe.h` files directly).
*   A terminal or command-line interface.

### Installation & Compilation

1.  **Clone the Repository:**
    ```bash
    git clone https://github.com/Rush1patel/TicTacToe-C.git
    cd TicTacToe-C
    ```
    Alternatively, you can download the `main.c`, `tictactoe.c`, and `tictactoe.h` files into the same directory.

2.  **Compile the Game:**
    Navigate to the directory containing `main.c`, `tictactoe.c`, and `tictactoe.h`. Compile the source files using GCC (or your preferred C compiler):
    gcc main.c tictactoe.c -o tictactoe -Wall -Wextra -pedantic -std=c99
    ```
    *   `main.c tictactoe.c`: Your C source files. `main.c` typically contains the `main()` function and program flow, while `tictactoe.c` contains the game logic functions.
*   `tictactoe.h`: The header file providing function declarations and shared definitions, included by your `.c` files.
    *   `-o tictactoe`: Specifies the output executable name as `tictactoe`.
    *   `-Wall -Wextra -pedantic`: Enables most compiler warnings for better code quality (recommended).
    *   `-std=c99`: Specifies the C99 standard.

3.  **Run the Game:**
    Once compiled successfully, execute the program:
    ```bash
    ./tictactoe
    ```

---

## 📖 How to Play

The rules are simple, the challenge is eternal!

1.  After running the game, the initial 3x3 Tic-Tac-Toe board will be displayed with numbered cells:
    ```
            |           |         
       1    |     2     |     3    
            |           |         
    ------------------------------
            |           |         
       4    |     5     |    6     
            |           |         
    ------------------------------
            |           |         
       7    |     8     |     9    
            |           |         
    ```
2.  **Player X** always starts the game.
3.  You will be prompted: `Type your answer Player X : `
4.  Enter the **number (1-9)** corresponding to the cell where you want to place your mark.
5.  If the move is valid, your mark ('X' or 'O') will be placed, and the board will be redisplayed.
6.  **Player O** takes the next turn.
7.  Players alternate turns until one of the following occurs:
    *   👑 **Victory!** A player successfully aligns three of their marks. The game will announce the winner.
    *   🤝 **Stalemate!** All nine cells are filled, and no player has won. The game will declare a draw.
8.  The game concludes after a win or a draw. To play again, re-run the executable.

---

## ✨ Peek into the Code: The `win()` Function

Here's a glimpse of the core logic (typically found in `tictactoe.c`) that determines a victor.

![image alt](https://github.com/Rush1patel/TicTacToe-C/blob/9e407ccf12f88a581b1bbe9ac3e7338498158067/carbon.png)

## 🔮 Future Adventures (Planned Enhancements)

Here are some exciting features planned for future updates:

-   🤖 **AI Opponent:** Implement a single-player mode where you can challenge an AI.
-   🔁 **Play Again Option:** Allow players to easily start a new game without re-running the program.
-   📊 **Score Tracking:** Implement a system to keep track of scores across multiple games.
-   🎨 **Enhanced UI (ncurses):** Explore using the ncurses library for a richer and more interactive terminal-based user interface.
-   🧑‍🤝‍🧑 **Player Name Input:** Allow players to input their names for a more personalized gaming experience.

---

## 🤝 Contributing

Contributions, issues, and feature requests are always welcome! We appreciate your help in making this project better.

**How to Contribute:**

1.  **Fork the Project:**
    *   Navigate to `https://github.com/Rush1patel/TicTacToe-C`
    *   Click the "Fork" button in the top right corner.
2.  **Create your Feature Branch:**
    ```bash
    git checkout -b feature/AmazingFeature
    ```
3.  **Commit your Changes:**
    ```bash
    git commit -m 'feat: Add some AmazingFeature'
    ```
    *(Please follow conventional commit messages if possible)*
4.  **Push to the Branch:**
    ```bash
    git push origin feature/AmazingFeature
    ```
5.  **Open a Pull Request:**
    *   Navigate back to the original repository: `https://github.com/Rush1patel/TicTacToe-C`
    *   Click on "Pull requests" and then "New pull request".
    *   Ensure the base repository is `Rush1patel/TicTacToe-C` and the base branch is `main` (or your project's default branch).
    *   Ensure the head repository is your fork and the compare branch is `feature/AmazingFeature`.
    *   Provide a clear title and description for your pull request.

**Found a Bug or Have a Suggestion?**

Please [open an issue here](https://github.com/Rush1patel/TicTacToe-C/issues) to report bugs or suggest new features.

---

## 📜 License

This project is distributed under the MIT License.

See the `LICENSE` file (or `LICENSE.md`) in the root of the repository for the full license text.

---
<p align="center">
  <img src="https://img.shields.io/badge/Crafted%20with-C%20Magic%20✨-00599C?style=for-the-badge&logo=c" alt="Crafted with C Magic"/>
  <a href="https://github.com/Rush1patel">
    <img src="https://img.shields.io/badge/Dev-Rushi%20Patel-00FFFF?style=for-the-badge&logo=git&logoColor=white" alt="Developer Rushi Patel"/> <!-- Aqua color, Git logo -->
  </a>
  <a href="https://github.com/Rush1patel?tab=followers">
    <img src="https://img.shields.io/badge/Follow%20Me%20on%20GitHub%20%7C%20Stay%20Synced%20🔁-333?style=for-the-badge&logo=github&logoColor=white" alt="Follow Rushi Patel on GitHub - Stay Synced"/>
  </a>
</p>

