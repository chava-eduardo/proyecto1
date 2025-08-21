#include <iostream>
#include <limits>
using namespace std;

int main() {
    int opcion = 0;
    while (true) {
        cout << "========== MENÚ ==========\n";
        cout << "1. Factorial de un número\n";
        cout << "2. Determinar subsidio de familia\n";
        cout << "3. Salir\n";
        cout << "==========================\n";
        cout << "Elige una opción: ";
        if (!(cin >> opcion)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida.\n";
            continue;
        }

        if (opcion == 1) {
            cout << "== Factorial ==\n";
            long long n;
            cout << "Ingresa un entero no negativo: ";
            cin >> n;
            if (n < 0) {
                cout << "Error: el número debe ser >= 0\n";
            } else {
                
                unsigned long long fact = 1;
                for (long long i = 2; i <= n; ++i) fact *= i;
                cout << "Factorial de " << n << " = " << fact << "\n";
            }
        } else if (opcion == 2) {
            cout << "== Subsidio de familia ==\n";
            int hijos;
            cout << "Número total de hijas/os: ";
            cin >> hijos;

            double base = 0.0;
            if (hijos >= 3) {
                if (hijos == 3) base = 300.0;
                else if (hijos >= 4 && hijos <= 5) base = 350.0;
                else base = 400.0;
            }

            int hijos_7_18 = 0;
            for (int i = 1; i <= hijos; ++i) {
                int edad;
                cout << "Edad del hijo/hija " << i << ": ";
                cin >> edad;
                if (edad >= 7 && edad <= 18) hijos_7_18++;
            }

            double extra = hijos_7_18 * (0.06 * base);
            double total = base + extra;

            cout << "Base: Q." << base << "\n";
            cout << "Hijas/os entre 7 y 18: " << hijos_7_18 << "\n";
            cout << "Extra total (6% por hijo/a): Q." << extra << "\n";
            cout << "Total a recibir: Q." << total << "\n";
        } else if (opcion == 3) {
            cout << "Saliendo...\n";
            break;
        } else {
            cout << "Opción inválida.\n";
        }
        cout << "--------------------------\n";
    }
    return 0;
}
