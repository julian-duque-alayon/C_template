```
# 🧩 C Template (CMake + VS Code)

![C](https://img.shields.io/badge/language-C-blue)
![CMake](https://img.shields.io/badge/build-CMake-brightgreen)
![GDB](https://img.shields.io/badge/debug-GDB-yellow)
![Valgrind](https://img.shields.io/badge/memory-Valgrind-red)
![WSL](https://img.shields.io/badge/platform-WSL2%20%2F%20Linux-lightgrey)

Plantilla minimalista y profesional para proyectos en **C** usando CMake, GDB y Valgrind.  
Configurada para compilar y depurar desde VS Code en Linux/WSL.  
(La estructura y flujo encajan con la documentación oficial de VS Code para C/C++ en Linux.)

---

## ✨ Características

- ⚙️ Build con CMake (`Debug` y `Release`)  
- 🐞 Debug con GDB (F5 en VS Code)  
- 🧠 Chequeo de fugas con Valgrind  
- 🧱 Estructura típica `src/` + `include/`  
- 🚀 Flujo listo para CI/CD o extensiones como Dev Containers

---

## 📦 Requisitos

### En Ubuntu / WSL
```bash
sudo apt update && sudo apt install build-essential gdb cmake valgrind
```

### En VS Code
- C/C++ (ms-vscode.cpptools)  
- CMake Tools (ms-vscode.cmake-tools)  
- (Opcional) Error Lens, clang-format

---

## 📁 Estructura

```
.
├── .vscode/          # Tasks / Launch / Settings
├── include/          # Headers (.h)
├── src/              # Sources (.c)
├── CMakeLists.txt    # Configuración de CMake
├── .gitignore        # Ignora build/ y otros artefactos
└── README.md         # Este archivo
```

---

## 🚀 Compilar y ejecutar (terminal)

### Release
```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/app
```

### Debug
```bash
cmake -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
./build/app
```

---

## 🐞 Debug (VS Code)

1. Abre la carpeta del proyecto (`code .`)  
2. `Ctrl+Shift+P` → **CMake: Configure**  
3. `Ctrl+Shift+B` → Build  
4. `F5` → Debug ( GDB automático )

---

## 🧪 Valgrind (memory leaks)

```bash
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./build/app
```

---

## 🧱 Crear un proyecto desde la plantilla

Opción rápida (clonar y “desvincular”):

```bash
git clone https://github.com/julian-duque-alayon/C_template.git mi_proyecto_c
cd mi_proyecto_c
rm -rf .git
git init
```

> ⚠️ Consejo: no subas `build/` al repo (ya está ignorado en `.gitignore`).

---

## 🧩 Personalización

| Archivo | Qué editar |
|---------|------------|
| `CMakeLists.txt` | Nombre del ejecutable, estándar de C, flags |
| `.vscode/launch.json` | Argumentos de depuración, rutas de símbolos |
| `.vscode/tasks.json` | Tareas personalizadas (tests, format, etc.) |

---

## 📚 Referencias rápidas

- [CMake Tutorial oficial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)  
- [VS Code C/C++ docs](https://code.visualstudio.com/docs/languages/cpp)  
- [Valgrind Quick Start](https://valgrind.org/docs/manual/quick-start.html)
