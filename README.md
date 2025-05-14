<div style="font-family: Arial, sans-serif; max-width: 800px; margin: 0 auto; padding: 20px; line-height: 1.6; color: #333;">

  <h1 style="color: #2c3e50; font-size: 2.5em; text-align: center;">TicTacToe-C 🎮</h1>

  <p style="font-size: 1.1em; color: #34495e; text-align: center;">
    A classic <strong>Tic-Tac-Toe</strong> game implemented in <strong>C</strong>, designed to run in a console environment. This project delivers a fun, two-player game with a clean ASCII board, input validation, and automatic win/draw detection, perfect for learning C programming or enjoying a quick match.
  </p>

  <hr style="border: 1px solid #dfe6e9; margin: 20px 0;">

  <h2 style="color: #2980b9; font-size: 1.8em;">✨ Features</h2>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li><strong>Two-Player Mode</strong>: Players alternate as <code>X</code> and <code>O</code> in a head-to-head match.</li>
    <li><strong>ASCII Board Display</strong>: Clear 3x3 grid using ASCII art for an intuitive game view.</li>
    <li><strong>Position-Based Input</strong>: Enter moves using numbers 1-9 corresponding to board positions.</li>
    <li><strong>Input Validation</strong>: Rejects invalid or occupied positions, prompting retries.</li>
    <li><strong>Win Detection</strong>: Checks for wins across rows, columns, and diagonals.</li>
    <li><strong>Draw Detection</strong>: Declares a draw when the board is full without a winner.</li>
    <li><strong>Lightweight</strong>: Single C file, runs on any system with a C compiler.</li>
  </ul>

  <h2 style="color: #2980b9; font-size: 1.8em;">🛠️ Prerequisites</h2>
  <p>To run this game, you’ll need:</p>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li>A C compiler (e.g., GCC)</li>
    <li><a href="https://code.visualstudio.com/" style="color: #2980b9; text-decoration: none;">Visual Studio Code</a> (recommended) or any C-compatible IDE</li>
    <li>Basic knowledge of running C programs</li>
  </ul>

  <h2 style="color: #2980b9; font-size: 1.8em;">🚀 Getting Started</h2>

  <h3 style="color: #2c3e50;">1. Clone the Repository</h3>
  <pre style="background: #f7f7f7; padding: 15px; border-radius: 5px; font-family: monospace;">
git clone https://github.com/Rush1patel/TicTacToe-C.git
cd TicTacToe-C
  </pre>

  <h3 style="color: #2c3e50;">2. Open in VS Code</h3>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li>Launch VS Code.</li>
    <li>Open the <code>TicTacToe-C</code> folder via <code>File > Open Folder</code>.</li>
  </ul>

  <h3 style="color: #2c3e50;">3. Compile the Code</h3>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li>Install the <strong>C/C++ Extension</strong> by Microsoft in VS Code for IntelliSense and debugging.</li>
    <li>Open the terminal in VS Code (<code>Terminal > New Terminal</code>).</li>
    <li>Compile the code:</li>
  </ul>
  <pre style="background: #f7f7f7; padding: 15px; border-radius: 5px; font-family: monospace;">
gcc -o tictactoe tictactoe.c
  </pre>
  <p><strong>Note</strong>: Ensure GCC is installed. On Windows, use MinGW. On macOS/Linux, install via <code>sudo apt-get install gcc</code> or <code>brew install gcc</code>.</p>

  <h3 style="color: #2c3e50;">4. Run the Game</h3>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li>Execute the compiled program:</li>
  </ul>
  <pre style="background: #f7f7f7; padding: 15px; border-radius: 5px; font-family: monospace;">
./tictactoe
  </pre>
  <p>On Windows, use <code>tictactoe.exe</code>. Alternatively, use VS Code’s <strong>Run</strong> button with a <code>tasks.json</code> file.</p>

  <h3 style="color: #2c3e50;">5. Play!</h3>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li>View the 3x3 board with positions numbered 1-9.</li>
    <li>Enter a number (1-9) to place your symbol (<code>X</code> or <code>O</code>).</li>
    <li>The game alternates players, validates inputs, and announces the winner or a draw.</li>
  </ul>

  <h2 style="color: #2980b9; font-size: 1.8em;">📂 Project Structure</h2>
  <pre style="background: #f7f7f7; padding: 15px; border-radius: 5px; font-family: monospace;">
TicTacToe-C/
├── tictactoe.c     # Core game logic and implementation
├── README.md       # This file
├── LICENSE         # MIT License
  </pre>

  <h2 style="color: #2980b9; font-size: 1.8em;">💻 Code Overview</h2>
  <p>The game is implemented in a single file, <a href="tictactoe.c" style="color: #2980b9; text-decoration: none;">tictactoe.c</a>, with clear, commented code for readability. Key components:</p>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li><strong>Main Function</strong>: Manages the game loop, player turns, and input validation.</li>
    <li><strong>intro Function</strong>: Prints the 3x3 ASCII board with current positions.</li>
    <li><strong>win Function</strong>: Checks for winning combinations and updates the game status.</li>
  </ul>
  <p>Comments in the code explain critical logic, making it easy to understand and extend. Check <a href="tictactoe.c" style="color: #2980b9; text-decoration: none;">tictactoe.c</a> for details.</p>

  <h2 style="color: #2980b9; font-size: 1.8em;">🎲 How to Play</h2>
  <ol style="padding-left: 20px;">
    <li>The game starts with a 3x3 board, positions labeled 1-9.</li>
    <li>Player 1 (<code>X</code>) and Player 2 (<code>O</code>) take turns.</li>
    <li>Enter a number (1-9) to place your symbol in that position.</li>
    <li>Align three symbols (horizontally, vertically, or diagonally) to win.</li>
    <li>If all 9 positions are filled without a winner, the game ends in a draw.</li>
  </ol>
  <h2 style="color: #2980b9; font-size: 1.8em;">🖥️ Example Gameplay</h2>
<pre style="background: #f7f7f7; padding: 15px; border-radius: 5px; font-family: monospace;">
        |           |         
   1    |     2     |     3    
        |           |         
------------------------------
        |           |         
   4    |     5     |     6    
        |           |         
------------------------------
        |           |         
   7    |     8     |     9    
        |           |         

Type your answer Player X : 10
<span style="font-size: 1.2em; font-weight: bold; color: #e74c3c;">Input error, Try Again</span>

Type your answer Player X : 5
        |           |         
   1    |     2     |     3    
        |           |         
------------------------------
        |           |         
   4    |     X     |     6    
        |           |         
------------------------------
        |           |         
   7    |     8     |     9    
        |           |         

Type your answer Player O : ...
</pre>

  <h2 style="color: #2980b9; font-size: 1.8em;">💻 Development Setup</h2>
  <ul style="list-style-type: disc; padding-left: 20  style="list-style-type: disc; padding-left: 20px;">
    <li><strong>IDE</strong>: Visual Studio Code</li>
    <li><strong>Compiler</strong>: GCC (or MinGW for Windows)</li>
    <li><strong>Extensions</strong>:
      <ul style="list-style-type: circle; padding-left: 20px;">
        <li>C/C++ by Microsoft (for IntelliSense and debugging)</li>
        <li>Code Runner (optional, for quick execution)</li>
      </ul>
    </li>
    <li><strong>OS</strong>: Compatible with Windows, macOS, and Linux</li>
  </ul>

  <h2 style="color: #2980b9; font-size: 1.8em;">🛡️ Error Handling</h2>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li>Rejects inputs outside 1-9 or already occupied positions.</li>
    <li>Prompts the player to retry with an error message.</li>
  </ul>

  <h2 style="color: #2980b9; font-size: 1.8em;">🌟 Why This Project?</h2>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li><strong>Learn C Programming</strong>: Practice arrays, loops, conditionals, and pointer usage.</li>
    <li><strong>Simple Yet Fun</strong>: Build a complete game with minimal code.</li>
    <li><strong>Extensible</strong>: Add features like AI opponents, score tracking, or colored output.</li>
  </ul>

  <h2 style="color: #2980b9; font-size: 1.8em;">🤝 Contributing</h2>
  <p>To contribute:</p>
  <ol style="padding-left: 20px;">
    <li>Fork the repository.</li>
    <li>Create a branch (<code>git checkout -b feature/your-feature</code>).</li>
    <li>Commit changes (<code>git commit -m "Add your feature"</code>).</li>
    <li>Push to the branch (<code>git push origin feature/your-feature</code>).</li>
    <li>Open a Pull Request.</li>
  </ol>

  <h2 style="color: #2980b9; font-size: 1.8em;">📜 License</h2>
  <p>This project is licensed under the MIT License. See the <a href="LICENSE" style="color: #2980b9; text-decoration: none;">LICENSE</a> file for details.</p>

  <h2 style="color: #2980b9; font-size: 1.8em;">🙌 Acknowledgments</h2>
  <ul style="list-style-type: disc; padding-left: 20px;">
    <li>Built with ❤️ using C and VS Code.</li>
    <li>Inspired by the classic Tic-Tac-Toe game.</li>
  </ul>

  <h2 style="color: #2980b9; font-size: 1.8em;">📬 Contact</h2>
  <p>Questions or suggestions? Open a <a href="https://github.com/Rush1patel/TicTacToe-C/issues" style="color: #2980b9; text-decoration: none;">GitHub issue</a>.</p>

  <p style="text-align: center; font-size: 1.2em; color: #2c3e50; margin-top: 20px;">
    Enjoy playing Tic-Tac-Toe! 🎉
  </p>

</div>
