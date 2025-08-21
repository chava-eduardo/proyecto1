
def main():
    while True:
        print("========== MENÚ ==========")
        print("1. Factorial de un número")
        print("2. Determinar subsidio de familia")
        print("3. Salir")
        print("==========================")
        opcion = input("Elige una opción: ").strip()

        if opcion == "1":
            print("== Factorial ==")
            try:
                n = int(input("Ingresa un entero no negativo: ").strip())
            except ValueError:
                print("Entrada inválida.")
                continue
            if n < 0:
                print("Error: el número debe ser >= 0")
            else:
                fact = 1
                i = 2
                while i <= n:
                    fact *= i
                    i += 1
                print(f"Factorial de {n} = {fact}")
        elif opcion == "2":
            print("== Subsidio de familia ==")
            try:
                hijos = int(input("Número total de hijas/os: ").strip())
            except ValueError:
                print("Entrada inválida.")
                continue

            # Base según cantidad de hijas/os (solo aplica a partir de 3)
            if hijos < 3:
                base = 0.0
            elif hijos == 3:
                base = 300.0
            elif 4 <= hijos <= 5:
                base = 350.0
            else:
                base = 400.0

            hijos_7_18 = 0
            idx = 1
            while idx <= hijos:
                try:
                    edad = int(input(f"Edad del hijo/hija {idx}: ").strip())
                except ValueError:
                    print("Entrada inválida, se asume 0.")
                    edad = 0
                if 7 <= edad <= 18:
                    hijos_7_18 += 1
                idx += 1

            extra = hijos_7_18 * (0.06 * base)  # 6% del total base por cada elegible
            total = base + extra

            print(f"Base: Q.{base:.2f}")
            print(f"Hijas/os entre 7 y 18: {hijos_7_18}")
            print(f"Extra total (6% por hijo/a): Q.{extra:.2f}")
            print(f"Total a recibir: Q.{total:.2f}")
        elif opcion == "3":
            print("Saliendo...")
            break
        else:
            print("Opción inválida.")
        print("--------------------------")

if __name__ == "__main__":
    main()
