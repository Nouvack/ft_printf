
<h1 align="center">ft_printf</h1>

<svg width="100%" height="200" xmlns="http://www.w3.org/2000/svg">
  <defs>
    <linearGradient id="grad" x1="0%" y1="0%" x2="100%" y2="100%">
      <stop offset="0%" stop-color="#00c6ff"/>
      <stop offset="100%" stop-color="#0072ff"/>
    </linearGradient>
  </defs>
  <rect width="100%" height="100%" fill="#0f0f0f"/>
  <text x="50%" y="50%" font-family="Fira Code, monospace" font-size="48" fill="url(#grad)" text-anchor="middle" dominant-baseline="middle">
    ➜ ft_printf
  </text>
  <text x="50%" y="80%" font-family="Fira Code, monospace" font-size="16" fill="#888" text-anchor="middle">
    Re-implementation of printf() in C – 42 Cursus
  </text>
</svg>


---

## 🧠 Project Overview

`ft_printf` is a lightweight recreation of the original `printf` function from the C Standard Library. Built as part of the 42 School curriculum, it aims to deepen understanding of **variadic functions**, **string formatting**, and **memory-safe logic**. The goal is not only to replicate the function but to do so in a modular and extensible way that respects the strict constraints of the 42 Norm.

---

## 🔑 Key Concepts

- Variadic functions using `<stdarg.h>`
- Format specifier parsing and dispatch
- Memory-safe and modular design
- Handling edge cases and undefined behaviors
- Unix-based C development and compilation

---

## ✅ Supported Format Specifiers

| Specifier | Description                            |
|-----------|----------------------------------------|
| `%c`      | Print a single character               |
| `%s`      | Print a null-terminated string         |
| `%p`      | Print a memory address in hex format   |
| `%d` / `%i` | Print a signed decimal integer       |
| `%u`      | Print an unsigned decimal integer      |
| `%x` / `%X` | Print an integer in hexadecimal      |
| `%%`      | Print a literal percent sign           |

---

## 🚫 Bonus (Not Implemented)

Although considered for expansion, the following features were **not implemented** in this version:

- Flag handling (`-`, `0`, `.`, width, precision)
- Format modifiers (`#`, `+`, space)
- Field padding and justification
- Positional parameters

---

## 🧪 How to Use

### 📦 Requirements

- A C compiler (gcc or clang)
- `make`

### 🛠️ Build

```bash
git clone https://github.com/Nouvack/ft_printf.git
cd ft_printf
make
```

### 📄 Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! The number is %d in hex: %x\n", "world", 42, 42);
    return 0;
}
```

Compile with:

```bash
gcc main.c libftprintf.a -o run
./run
```

---

## 🧩 Example Outputs

| Input                                         | Output                       |
|----------------------------------------------|------------------------------|
| `ft_printf("Hello %s!", "world");`           | `Hello world!`               |
| `ft_printf("Number: %d", 42);`               | `Number: 42`                 |
| `ft_printf("Hex: %x", 255);`                 | `Hex: ff`                    |
| `ft_printf("Pointer: %p", &ptr);`            | `Pointer: 0x...`             |
| `ft_printf("Percent: %%");`                  | `Percent: %`                 |

---

## 🧱 Project Structure

```
ft_printf/
├── src/
│   ├── ft_printf.c
│   ├── ft_printf.h
│   ├── ft_putchar.c
│   ├── ft_putstr.c
│   ├── ft_putnbr.c
│   ├── ft_putptr.c
│   └── ft_puthexa.c
└── Makefile
```

---

## 🧠 What I Learned

- 📚 **Variadic Functions**: Mastering `va_start`, `va_arg`, and `va_end`.
- ✨ **Format Handling**: Building a parser-dispatcher logic.
- 🧼 **Memory Discipline**: Handling NULLs, errors, and edge cases with rigor.
- ⚔️ **Unix Logic**: Command-line tools, Makefiles, and C compilation.

---

## 👤 Author

**Noam Novack**  
42 Madrid Student  
GitHub: [@Nouvack](https://github.com/Nouvack)  
42 Login: `nsantand`

---

## 💬 Acknowledgments

This project is part of the [42 Cursus](https://42.fr/en/homepage/), a challenging and peer-driven programming program. Special thanks to peers and code reviewers at 42 Madrid who helped refine and debug the implementation. 🙌
