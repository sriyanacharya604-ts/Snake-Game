#snake.c
This is a snake game. I made it during my C learning.
# 🐍 Snake Game in C

This is my **first game project in C programming** — a simple console-based **Snake Game** created while learning the fundamentals of C.

The main goal of this project was not just to make a game, but to understand how programming concepts work together in a real project. While building this game, I practiced **variables, loops, conditions, functions, keyboard input, random numbers, game logic, and screen handling**.

## 🎮 About the Game

In this Snake Game, the player controls a snake inside a bordered game area.

The objective is simple:

* 🐍 Move the snake around the game area
* 🍎 Eat the food
* 📈 Increase your score
* 🧱 Avoid hitting the walls
* 💥 Avoid colliding with yourself
* 🏆 Try to achieve the highest possible score

The snake becomes longer as it eats food, making the game progressively more challenging.

## 🛠️ Technologies Used

* **C Programming Language**
* **GCC Compiler**
* **Windows Console**
* `stdlib.h`
* `stdio.h`
* `conio.h`
* `windows.h`

## 🎯 Controls

| Key | Action        |
| --- | ------------- |
| `W` | Move Up ⬆️    |
| `S` | Move Down ⬇️  |
| `A` | Move Left ⬅️  |
| `D` | Move Right ➡️ |
| `Q` | Quit Game ❌   |

## ✨ Features

* Console-based gameplay
* Snake movement
* Random food generation
* Score system
* Snake growth
* Collision detection
* Game-over condition
* Increasing difficulty
* Keyboard controls
* Simple and beginner-friendly implementation

## 🧠 What I Learned

This project helped me understand how different C concepts can be combined to create something interactive.

### 1. Loops

Loops are used to continuously run the game until the player loses or quits.

### 2. Conditional Statements

`if`, `else`, and other conditions are used for:

* Checking movement
* Detecting food
* Detecting collisions
* Checking game-over conditions

### 3. Functions

Functions help divide the game into smaller and easier-to-understand parts, such as:

* Drawing the game
* Moving the snake
* Generating food
* Checking collisions
* Updating the score

### 4. Random Numbers

Random number generation is used to place food at different positions so that the game does not always behave the same way.

### 5. Keyboard Input

Keyboard input allows the player to control the snake while the game is running.

### 6. Game Logic

The most interesting part of this project was learning how multiple programming concepts work together to create a complete game loop.

## 📊 Game Flow

```text
Start Game
    ↓
Initialize Snake
    ↓
Generate Food
    ↓
Display Game
    ↓
Take User Input
    ↓
Move Snake
    ↓
Check Food
    ↓
Food Eaten?
 ┌──Yes──→ Increase Score
 │          ↓
 │      Grow Snake
 │          ↓
 │      Generate Food
 │
 └──No
    ↓
Check Collision
    ↓
Collision?
 ┌──Yes──→ Game Over
 │
 └──No
    ↓
Continue Game
```

## 🚀 Future Improvements

This is only the beginning of my game-development journey in C. I would like to improve this project further by adding:

* 🎨 Better console graphics
* 🔊 Sound effects
* 🏆 High-score system
* ⚡ Different difficulty levels
* ⏱️ Increasing snake speed
* 🎮 Pause and resume
* 🧱 Obstacles
* 🍎 Multiple types of food
* 💾 Saving high scores
* 🗺️ Different maps
* 👥 Two-player mode

## 📚 Why I Made This Project

As a beginner in programming, I wanted to move beyond simply solving small C problems and build something that actually **works and feels interactive**.

Creating this Snake Game helped me understand that programming is not only about writing individual statements — it is about combining small concepts to build a complete system.

This project is my **first step toward becoming better at programming and building larger projects in the future.**

## ❤️ My First Game

> **This is my first game project in C.**

It may be a simple game, but it represents an important milestone in my programming journey.

From basic C programs to my first game — **this is just the beginning. 🚀**

## 👨‍💻 Author

**Sriyan Acharya**

CSE (AI) Student
UEM Kolkata

---

⭐ If you like this project, feel free to give it a **star**!
