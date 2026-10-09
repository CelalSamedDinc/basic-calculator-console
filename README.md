# 🧮 Basic Arithmetic Calculator (C++)

A robust, interactive console-based calculator application performing basic arithmetic operations, built with modern C++. Features structured input validation, runtime error handling, floating-point modulus calculation, and persistent session flow.

---

## ✨ Features

* **Arithmetic Operations:** Supports addition (`+`), subtraction (`-`), multiplication (`*`), division (`/`), and modulus (`%`).
* **Floating-Point Modulus:** Computes remainder for floating-point values via `fmod()` from `<cmath>`.
* **Zero Division & Modulus Protection:** Implements defensive conditional checks to prevent undefined behavior and runtime crashes when dividing or taking the modulus by zero.
* **Input Validation Loop:** Employs a `while` loop that intercepts invalid operator inputs and prompts the user repeatedly until a valid symbol is provided.
* **Session Persistence:** Utilizes a `do-while` loop allowing consecutive calculations without terminating the program.

---

## 🛠️ Built With

* **Language:** C++
* **Standard Libraries:** `<iostream>`, `<cmath>`
* **Development Environment:** Microsoft Visual Studio / MSVC

---

## 🚀 Getting Started

### Using Microsoft Visual Studio:
1. Clone or download the repository.
2. Open the project in Visual Studio.
3. Press `Ctrl + F5` to compile and run.

### Using Command Line (g++):
```bash
# Compile source file
g++ main.cpp -o dort-temel-islem

# Run the executable
./dort-temel-islem
```

---

## 🖥️ Example Console Flow

```text
Birinci sayiyi giriniz: 25.5
Islemi secin (+, -, *, /, %): %
Ikinci sayiyi giriniz: 4
Sonuc: 1.5

Baska bir islem yapmak istiyor musunuz? (E/H): E
------------------------------------
Birinci sayiyi giriniz: 10
Islemi secin (+, -, *, /, %): /
Ikinci sayiyi giriniz: 0
Hata: Bir sayi 0'a bolunemez!

Baska bir islem yapmak istiyor musunuz? (E/H): H
------------------------------------
Program sonlandirildi. Iyi gunler!
```

---

## 👤 Author

* **GitHub:** (https://github.com/celalsameddinc)
* **LinkedIn:** (www.linkedin.com/in/celal-samed-dinç-6378b0439)
* **Instagram:** (https://www.instagram.com/celalsamedxq/)
