#  Documentación Externa – Menú Interactivo (Factorial y Subsidio de Familia)

**Nombre del programa:**
Menú interactivo: Factorial y Subsidio de familia

**Autor:**
FRANCISCO EDUARDO CHAVAJAY COCHE
**Fecha de creación:**  
_Agosto 2025_
**Versión:**
1.0

**Lenguajes:**
- C++
- Python
- Pseint(opcional si se desea ejecutar el pseudocodigo original)
---

## Objetivo del programa
Permitir al usuario elegir entre:
- Calcular el **factorial** de un número entero no negativo
- Determinar el **subsidio de familia** según la cantidad y edades de los hijos
- Salir del programa

El menú se repetirá hasta que el usuario decida salir

---

##  Descripción del funcionamiento
1. **Menú principal:**
   - `1` → Calcular factorial
   - `2` → Determinar subsidio de familia
   - `3` → Salir

2. **Bucle de repetición:**
   - Ambos programas utilizan un **bucle `while`** (`while(true)` en C++ y `while True` en Python) para repetir el menú hasta que el usuario elija salir
   - PSeInt: utiliza Repetir ... Hasta Que opcion=3
   - En los tres casos, el menú se muestra repetidamente hasta que el usuario elige la opción 3 (Salir).

3. **Validación de entradas:**
   - Si el usuario ingresa un valor no numérico o inválido, se muestra un mensaje de error y se solicita la entrada nuevamente

4. **Opción 1 – Factorial:**
   - Solicita un número entero no negativo
   - Calcula el factorial usando un **bucle** (`for` en C++, `while` en Python)
   - PSeInt: usa un ciclo Para i<-2 Hasta n Con Paso 1 Hacer
   - Muestra el resultado del cálculo

5. **Opción 2 – Subsidio de familia:**
   - Solicita el número total de hijos/as
   - Define el **subsidio base**:
     - Menos de 3 hijos → Q.0
     - 3 hijos → Q.300
     - 4–5 hijos → Q.350
     - 6 o más hijos → Q.400
   - Pide la edad de cada hijo/a y cuenta los que están en el rango **7 a 18 años**
   - Calcula un **extra del 6% del base por cada hijo/a elegible**
   - Muestra: base, cantidad de hijos en rango, extra y total a recibir

6. **Opción 3 – Salir:**
   - El programa termina mostrando el mensaje `"Saliendo..."
   - **Nota:** No hay un mensaje de despedida formal; solo indica que el programa se está cerrando y se ejecutara siempre y cuando el usuario decida seleccionar la opcion 3

7. **Opción inválida:**
   - Se muestra un mensaje de error y vuelve a mostrar el menú
---

## Entradas
- Opción del menú (`1`, `2` o `3`)
- Para opción 1: número entero no negativo
- Para opción 2: número total de hijos/as y edades de cada uno

---
##  Salidas
- Resultado del factorial
- Cálculo del subsidio: base, hijos/as en rango, extra y total
- Mensajes de error en caso de entradas inválidas
- Mensaje de salida: `"Saliendo..."

---

##  Requisitos del sistema
- **C++**: Compilador compatible con C++11 o superior
- **Python**: Python 3.x instalado
- **Peseint**: Instalado en el sistema (cualquier versión reciente).


---

##  Notas adicionales
- Ambos programas repiten el menú hasta que el usuario elige salir
- Incluyen validación básica de entradas no numéricas y números negativos
- El cálculo de **factorial** en C++ puede generar **overflow**(desbordameinto de enteros) con números muy grandes
- PSeInt: se implementa la lógica con ciclos Para, Si y Repetir.
- En Python no ocurre overflow porque maneja enteros grandes automáticamente
- El subsidio aplica únicamente si se tienen **3 o más hijos/as** es decir que si tiene menos de 3 hijos solo se brindara el subsidio
- El mensaje de salida indica que el programa termino de ejecutarse

