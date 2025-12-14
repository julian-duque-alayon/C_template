# C_template
# 🧩 C Template (CMake + VS Code)

![C](https://img.shields.io/badge/language-C-blue)
![CMake](https://img.shields.io/badge/build-CMake-brightgreen)
![GDB](https://img.shields.io/badge/debug-GDB-yellow)
![Valgrind](https://img.shields.io/badge/memory-Valgrind-red)
![WSL](https://img.shields.io/badge/platform-WSL2%20%2F%20Linux-lightgrey)

Plantilla minimalista y profesional para proyectos en **C** usando CMake, GDB y Valgrind.
Configurada para compilar y depurar desde VS Code en Linux/WSL.  
(La estructura y flujo encajan con la documentación oficial de VS Code para C/C++ en Linux.) [web:20][web:28]

---

## ✨ Características

- 🐞 Build con CMake (`Debug` y `Release`).
- 🐞 Debug con GDB (F5 en VS Code).
- 🧠 Chequeo de fugas con Valgrind.
- 🧱 Estructura típica `src/` + `include/`.

---

## 📦 Requisitos

En Ubuntu / WSL:

 - sudo apt update && sudo apt install build-essential gdb cmake valgrind


En VS Code:
- C/C++ (ms-vscode.cpptools)
- CMake Tools (ms-vscode.cmake-tools)
- (Opcional) Error Lens, clang-format

---

## 📁 Estructura

.
├── .vscode/ # Tasks/Launch/Settings (VS Code)
├── include/ # Headers (.h)
├── src/ # Sources (.c)
├── CMakeLists.txt
└── README.md


---

## 🚀 Compilar y ejecutar (terminal)


Para Release:

cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/app


---

## 🐞 Debug (VS Code)

1. Abre la carpeta del proyecto (`code .`)
2. `Ctrl+Shift+P` → **CMake: Configure**
3. `Ctrl+Shift+B` → Build
4. `F5` → Debug

---

## 🧪 Valgrind (memory leaks)

- valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./build/app


---

## 🧱 Crear un proyecto desde la plantilla

Opción rápida (clonar y “desvincular”):

git clone https://github.com/julian-duque-alayon/C_template.git mi_proyecto_c
cd mi_proyecto_c
rm -rf .git
git init	


> Consejo: no subas `build/` al repo (debe quedar ignorado en `.gitignore`).
