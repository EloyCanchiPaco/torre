
#include <iostream>
class torre {
public:
	short int filas;
	short int columnas;
	bool isBlack;
public:
	torre(short f, short c, bool black=false) {
		filas = f;
		columnas = c;
		isBlack = black;
	}
    bool movimiento(short fd, short cd, const short tablero[8][8]) {
        if (fd < 0 || fd >= 8 || cd < 0 || cd >= 8) {
            return false;
        }

        if (fd == filas && cd == columnas) {
            return false;
        }

        bool esHorizontal = (filas == fd);
        bool esVertical = (columnas == cd);

        if (!esHorizontal && !esVertical) {
            return false; 
        }

     
        if (esHorizontal) {
            short paso = (cd > columnas) ? 1 : -1;
            for (short c = columnas + paso; c != cd; c += paso) {
                if (tablero[filas][c] != 0) {
                    return false; 
                }
            }
        }
        else if (esVertical) {
            short paso = (fd > filas) ? 1 : -1;
            for (short f = filas + paso; f != fd; f += paso) {
                if (tablero[f][columnas] != 0) {
                    return false; 
                }
            }
        }

        
        filas = fd;
        columnas = cd;
        return true;
    }
};
void mostrarTablero(const short tablero[8][8], const torre& t) {
    std::cout << "\n   1 2 3 4 5 6 7 8 (Columnas)\n";
    std::cout << "  -----------------\n";
    for (int f = 1; f < 9; f++) {
        std::cout << f << " |"; 
        for (int c = 1; c < 9; c++) {
            if (f == t.filas && c == t.columnas) {
                std::cout << "T "; 
            }
            else if (tablero[f][c] != 0) {
                std::cout << "X "; 
            }
            else {
                std::cout << ". ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
int main()
{
    short tablero[8][8] = { 0 };

    // Colocamos algunos obstáculos (X) de prueba
    tablero[3][5] = 1;
    tablero[5][3] = 1;

    // Posición inicial de la torre (T) en (3, 3)
    torre t1(3, 3);

    int opcion = 0;
    short fd, cd;

    do {
        mostrarTablero(tablero, t1);
        std::cout << "--- MENU DE CONTROL DE LA TORRE ---\n";
        std::cout << "1. Mover torre\n";
        std::cout << "2. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            std::cout << "Ingrese la fila destino (1-8): ";
            std::cin >> fd;
            std::cout << "Ingrese la columna destino (1-8): ";
            std::cin >> cd;

            if (t1.movimiento(fd, cd, tablero)) {
                std::cout << "\n[EXITO] La torre se movio a la casilla (" << t1.filas << ", " << t1.columnas << ").\n";
            }
            else {
                std::cout << "\n[ERROR] Movimiento invalido (fuera de limites, diagonal o bloqueado por obstaculo).\n";
            }
            break;

        case 2:
            std::cout << "Saliendo del programa...\n";
            break;

        default:
            std::cout << "Opcion no valida. Intente de nuevo.\n";
            break;
        }

    } while (opcion != 2);

    return 0;
}
//git push subir en la nube y git pull subir en la nube
//hacer un publish del repositorio  y agregar un markdown file readme.md

