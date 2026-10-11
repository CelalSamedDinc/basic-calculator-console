# 🧮 Basic Arithmetic Calculator (C++)

A robust, interactive console-based calculator application performing arithmetic operations, advanced mathematical functions, exponentiation, square roots, arbitrary-base logarithms, stateful memory chaining, and session calculation history, built with modern C++. Features structured input validation, runtime error handling, floating-point modulus calculation, factorial computation with 64-bit overflow protection, a persistent result memory (ANS) system, and dynamic history tracking powered by the C++ Standard Template Library (STL).

---

## ✨ Features

- **Comprehensive Operations:** Supports addition (`+`), subtraction (`-`), multiplication (`*`), division (`/`), percentage calculation (`%`), floating-point modulus (`mod`), factorial (`!`), exponentiation (`^`), square root (`sqrt`), and arbitrary-base logarithm (`log`).
- **Session History Logging (`std::vector` & `std::stringstream`):**
  - Logs every successful calculation dynamically throughout the session using `std::vector<std::string>`.
  - Serializes operations cleanly with `std::stringstream`, avoiding unnatural trailing zero formatting.
  - Prompts users on demand to display a numbered chronological list of executed operations.
  - Automatically filters calculation errors so invalid operations do not pollute the history buffer.
- **Unary Functions (Single Operand):**
  - **Factorial (`!`):** Computes factorials using 64-bit integers (`long long`) with an upper-bound safeguard ($n \le 20$) and negative-value prevention.
  - **Square Root (`sqrt`):** Computes square roots via `<cmath>` without prompting for a second operand, intercepting negative numbers to prevent imaginary domain violations.
- **Logarithm with Dynamic Base (`log`):**
  - Evaluates $\log_{base}(x)$ using the change-of-base formula (`log(sayi2) / log(sayi1)`).
  - Enforces strict domain validation: rejects non-positive bases ($base \le 0$), base of 1 ($base = 1$), and non-positive arguments ($x \le 0$).
- **Exponentiation / Power (`^`):**
  - Evaluates power operations ($base^{exponent}$) for floating-point and negative exponents.
  - Intercepts mathematically undefined operations where the base is zero and the exponent is negative ($0^y$ where $y < 0$).
- **Dedicated Percentage & Modulus Handling:**
  - **Percentage (`%`):** Calculates the percentage ratio of the first number relative to the second (`sayi1 * sayi2 / 100`).
  - **Modulus (`mod`):** Computes remainder values for floating-point numbers via `fmod()` from `<cmath>`.
- **State Management & Result Chaining (ANS):** Retains the previous calculation result (`sonSonuc`) to seamlessly feed it into subsequent operations upon user confirmation.
- **Defensive Error Handling:**
  - Protects against division/modulus by zero, negative square roots, invalid logarithm domains, and zero-base negative powers.
  - Resets continuation flags on runtime errors to avoid propagating corrupt states into future cycles.
- **Modern Type Safety:** Uses explicit `static_cast` conversions between `double` and `long long`, suppressing compiler warnings (MSVC C4244).
- **Session Persistence:** Encapsulated in a `do-while` loop allowing continuous multi-step sessions.

---

## 🛠️ Built With

- **Language:** C++
- **Standard Libraries:** `<iostream>`, `<cmath>`, `<string>`, `<vector>`, `<sstream>`
- **Development Environment:** Microsoft Visual Studio / MSVC

---

## 🚀 Getting Started

### Using Microsoft Visual Studio:
1. Clone or download the repository.
2. Open the project folder or `.sln` file in Visual Studio.
3. Press `Ctrl + F5` to compile and run.

### Using Command Line (g++):
```bash
# Compile source file
g++ main.cpp -o basic-calculator-console

# Run the executable
./basic-calculator-console

Birinci sayiyi giriniz: 16
Islemi secin (+, -, *, /, %, mod, !, ^, sqrt, log): sqrt
Sonuc: 4

Islem gecmisini goruntulemek istiyor musunuz? (E/H): H

Baska bir islem yapmak istiyor musunuz? (E/H): E
Bulunan sonuc (4) ile devam etmek istiyor musunuz? (E/H): E
------------------------------------
Birinci sayi (onceki sonuc): 4
Islemi secin (+, -, *, /, %, mod, !, ^, sqrt, log): log
Ikinci sayiyi giriniz: 64
Sonuc: 3

Islem gecmisini goruntulemek istiyor musunuz? (E/H): H

Baska bir islem yapmak istiyor musunuz? (E/H): E
Bulunan sonuc (3) ile devam etmek istiyor musunuz? (E/H): H
------------------------------------
Birinci sayiyi giriniz: 2
Islemi secin (+, -, *, /, %, mod, !, ^, sqrt, log): ^
Ikinci sayiyi giriniz: 5
Sonuc: 32

Islem gecmisini goruntulemek istiyor musunuz? (E/H): E

--- ISLEM GECMISI ---
1. sqrt(16) = 4
2. log_4(64) = 3
3. 2 ^ 5 = 32
---------------------

Baska bir islem yapmak istiyor musunuz? (E/H): H
------------------------------------
Program sonlandirildi. Iyi gunler!

👤 Author
GitHub: (https://github.com/celalsameddinc)

LinkedIn: (www.linkedin.com/in/celal-samed-dinç-6378b0439)

Instagram: (https://www.instagram.com/celalsamedxq/)
