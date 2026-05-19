## Rock Paper C-issors 🪨📄✂️

A C implementation of the traditional Rock Paper Scissors game that is modular and console-based. A unique pseudo-random number generator and several game modes are included in this project.

## Pictures Of Gameplay
<img width="638" height="528" alt="Image" src="https://github.com/user-attachments/assets/b8eb7aad-1b01-4d19-90e2-eb16189bae35" />

<img width="661" height="601" alt="Image" src="https://github.com/user-attachments/assets/4a88b86b-1969-44e0-b93e-6528b7bbba00" />

## 🎮 Features

Modular Architecture: For ease of maintenance, logic is divided among several files (Searching, Sorting, Game Modes).
->There are two game modes:

--->Play for as long as you like in Endless Mode!

--->Best of Three: A race in which the first person to reach three wins.

->Custom Randomness: Replaces the standard rand() with a Linear Congruential Generator (LCG) for move generation.

->Clean Menu System: An easy way to switch between game modes or get out of the game.

## 🛠️ Project Framework
RockPaperC-issors/

├── src/                
│   ├── main.c          
│   ├── main_game.c    
│   ├── rand_gen.c      
│   ├── endless_functions.c

│   └── bestOfThree_functions.c

├── bin/                
└── README.md


## 💻 Installation Commands

To get this game running, the user needs a C compiler (like gcc) and Git installed.

1. Clone the Repository
```
git clone https://github.com/VISP06/RockPaperC-issors.git
```
First, they need to download your code from GitHub to their local machine:

2. Navigate to the Project Folder
Move into the directory created by the clone command:
```
cd RockPaperC-issors
```
## 🚀 Getting Started
Prerequisites

You will need a C compiler (like gcc) installed on your system.
Compilation

To compile all the modules together into a single executable, run the following command from the root directory:

```bash
gcc src/*.c -o main
```

Running the Game

After compiling, run the executable:
```PowerShell
./main
```
Linux/macOS:
```bash
./main
```
