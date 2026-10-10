# 🧮 Basic Arithmetic Calculator (C++)

A robust, interactive console-based calculator application performing arithmetic operations, advanced mathematical functions, and stateful memory chaining, built with modern C++. Features structured input validation, runtime error handling, floating-point modulus calculation, factorial computation with 64-bit overflow protection, and a persistent result memory (ANS) system.

---

## ✨ Features

- **Comprehensive Operations:** Supports addition (`+`), subtraction (`-`), multiplication (`*`), division (`/`), percentage calculation (`%`), floating-point modulus (`mod`), and factorial (`!`).
- **Unary Factorial with Overflow Safeguard (`!`):** 
  - Bypasses the second operand prompt to operate as a unary function on the first number.
  - Computes factorials using 64-bit integers (`long long`) with an upper bound safety limit ($n \le 20$) to prevent integer overflow.
  - Prevents execution on negative inputs ($n < 0$) with graceful mathematical error reporting.
- **Dedicated Percentage & Modulus Handling:**
  - **Percentage (`%`):** Calculates the percentage ratio of the first number relative to the second (`sayi1 * sayi2 / 100`).
  - **Modulus (`mod`):** Computes remainder values for floating-point numbers via `fmod()` from `<cmath>`.
- **State Management & Result Chaining (ANS):** Prompts the user after each calculation to retain the computed value (`sonSonuc`) as the initial operand for subsequent calculations.
- **Defensive Error Handling:**
  - Prevents undefined behavior and crashes during division or modulus by zero.
  - Automatically resets the state flag on error states to protect subsequent calculations from corrupted inputs.
- **Modern Type Safety:** Employs explicit `static_cast` conversions between `double` and `long long` / `int`, suppressing compiler truncation warnings (such as MSVC C4244).
- **Input Validation Loop:** Employs a `while` loop that intercepts invalid operator inputs (`+, -, *, /, %, mod, !`) and repeatedly prompts until a valid operator is provided.
- **Session Persistence:** Utilizes a `do-while` loop allowing consecutive operations without terminating the program.

---

## 🛠️ Built With

- **Language:** C++
- **Standard Libraries:** `<iostream>`, `<cmath>`, `<string>`
- **Development Environment:** Microsoft Visual Studio / MSVC

---

## 🚀 Getting Started

### Using Microsoft Visual Studio:
1. Clone or download the repository.
2. Open the project in Visual Studio.
3. Press `Ctrl + F5` to compile and run.

### Using Command Line (g++):
```bash
# Compile source file
g++ main.cpp -o basic-calculator-console

# Run the executable
./basic-calculator-console

Birinci sayiyi giriniz: 5
Islemi secin (+, -, *, /, %, mod, !): !
Sonuc: 120

Baska bir islem yapmak istiyor musunuz? (E/H): E
Bulunan sonuc (120) ile devam etmek istiyor musunuz? (E/H): E
------------------------------------
Birinci sayi (onceki sonuc): 120
Islemi secin (+, -, *, /, %, mod, !): %
Ikinci sayiyi giriniz: 20
Sonuc: 24

Baska bir islem yapmak istiyor musunuz? (E/H): E
Bulunan sonuc (24) ile devam etmek istiyor musunuz? (E/H): H
------------------------------------
Birinci sayiyi giriniz: 25.5
Islemi secin (+, -, *, /, %, mod, !): mod
Ikinci sayiyi giriniz: 4
Sonuc: 1.5

Baska bir islem yapmak istiyor musunuz? (E/H): H
------------------------------------
Program sonlandirildi. Iyi gunler!

👤 Author
GitHub: (https://github.com/celalsameddinc)

LinkedIn: (www.linkedin.com/in/celal-samed-dinç-6378b0439)

Instagram: (https://www.instagram.com/celalsamedxq/)
