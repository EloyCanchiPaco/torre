# Control y Simulación del Movimiento de la Torre (Ajedrez en C++)

Este proyecto implementa la lógica de movimiento de la pieza de la **Torre** en un tablero de ajedrez simulado en consola utilizando Programación Orientada a Objetos (POO) en C++.

------------------

## 📌 Características

- **Validación de Límites:** Comprueba que las coordenadas destino estén dentro del tablero ($8 \times 8$).
- **Validación de Movimiento Ortiz / Ortogonal:** Asegura que la torre solo se mueva en línea recta (horizontal o vertical).
- **Detección de Obstáculos:** Verifica la trayectoria para evitar saltar sobre otras piezas u obstáculos en el camino.
- **Interfaz Interactiva:** Muestra el estado del tablero mediante una representación visual en consola e incluye un menú interactivo.

---

## 🛠️ Simbología del Tablero

| Símbolo | Descripción |
| :---: | :--- |
| `T` | Posición actual de la Torre |
| `X` | Pieza u obstáculo en el tablero |
| `.` | Casilla vacía |

---

## ⚙️ Compilación y Ejecución

### Prerrequisitos
- Compilador de C++ (como `g++`, Clang o MSVC).

### Pasos para ejecutar

1. **Clonar el repositorio:**
   ```bash
   git clone [https://github.com/tu_usuario/tu_repositorio.git](https://github.com/tu_usuario/tu_repositorio.git)
   cd tu_repositorio
