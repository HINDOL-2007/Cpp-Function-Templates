# ⚔️ C++ Generic Combat Calculator (Function Templates)

## 📖 About the Project
This project explores standalone Function Templates in C++. Unlike Class Templates which require explicit data type declarations during object instantiation, this architecture demonstrates how the C++ compiler automatically deduces the correct data types from the passed arguments to generate optimized, type-safe functions at runtime.

## ✨ Features
*   **Single-Parameter Templates:** Implements `template <class T>` to strictly enforce that compared combat variables and their return values share the exact same data type.
*   **Multi-Parameter Templates:** Implements `template <class T1, class T2>` in a void logging function to seamlessly merge strings and numeric types into a single console output stream.
*   **Automatic Type Deduction:** Executes both `int` and `float` logic using a single universal blueprint without utilizing `< >` brackets in the `main()` execution block.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Function Templates, Generic Algorithms, Automatic Type Deduction.
