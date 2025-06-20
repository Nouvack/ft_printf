<p align="center">
  <img src="./A_digital_graphic_design_features_the_text_\"__ft_p.png" alt="ft_printf banner" width="600"/>
</p>

<h1 align="center">✨ ft_printf ✨</h1>

<p align="center">
  <em>Una implementación personalizada de la mítica función <code>printf</code> de C</em><br>
  <sub>Desarrollado como parte del core curriculum en <strong>42 School Madrid</strong></sub>
</p>

---

## 🚀 Descripción

`ft_printf` es una versión simplificada de la función `printf` de la biblioteca estándar de C. Esta implementación permite comprender el funcionamiento interno del formateo de strings, manejo de argumentos variables, impresión de diferentes tipos de datos y modularización de código.

---

## 🔧 Especificaciones Soportadas

| Especificador | Descripción                    |
|---------------|--------------------------------|
| `%c`          | Carácter                       |
| `%s`          | Cadena de texto                |
| `%p`          | Puntero (en hexadecimal)       |
| `%d` / `%i`   | Entero con signo               |
| `%u`          | Entero sin signo               |
| `%x` / `%X`   | Hexadecimal (min/mayúsculas)   |
| `%%`          | Porcentaje literal             |

---

## 🗂️ Estructura del Proyecto

```
ft_printf/
├── src/
│   ├── ft_printf.c       # Función principal
│   ├── ft_printf.h       # Header con prototipos
│   ├── ft_putchar.c      # Imprimir carácter
│   ├── ft_putstr.c       # Imprimir cadena
│   ├── ft_putnbr.c       # Imprimir número
│   ├── ft_putptr.c       # Imprimir puntero
│   └── ft_puthexa.c      # Imprimir hexadecimal
└── Makefile              # Compilación del proyecto
```

---

## ⚙️ Compilación y Uso

```bash
make
```

Luego úsalo en tu código:

```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hola %s, número: %d\n", "mundo", 42);
    return 0;
}
```

Compílalo con:

```bash
gcc main.c libftprintf.a -o test
./test
```

---

## 🧪 Resultado Esperado

```
Hola mundo, número: 42
```

---

## 📜 Licencia

Distribuido bajo la licencia MIT. Ver el archivo `LICENSE` para más detalles.

---

## 🧑‍💻 Autor

**Noam Novack**  
Estudiante en 42 Madrid  
GitHub: [@Nouvack](https://github.com/Nouvack)

---

<p align="center">
  <em>Hecho con 💙 y muchos printf("debug")</em>
</p>
