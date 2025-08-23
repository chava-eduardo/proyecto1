Algoritmo Proyecto1
	Definir opcion, n, i, hijos, edad, hijos_7_18 Como Entero
	Definir fact, base, extra, total Como Real
	Repetir
		Escribir '========== MENÚ =========='
		Escribir '1. Factorial de un número'
		Escribir '2. Determinar subsidio de familia'
		Escribir '3. Salir'
		Escribir '=========================='
		Escribir 'Elige una opción: 'Sin Saltar
		Leer opcion
		Si opcion=1 Entonces
			Escribir '== Factorial =='
			Escribir 'Ingresa un entero no negativo: 'Sin Saltar
			Leer n
			Si n<0 Entonces
				Escribir 'Error: el número debe ser >= 0'
			SiNo
				fact <- 1
				Para i<-2 Hasta n Con Paso 1 Hacer
					fact <- fact*i
				FinPara
				Escribir 'Factorial de ', n, ' = ', fact
			FinSi
		SiNo
			Si opcion=2 Entonces
				Escribir '== Subsidio de familia =='
				Escribir 'Número total de hijas/os: 'Sin Saltar
				Leer hijos
				base <- 0
				Si hijos>=3 Entonces
					Si hijos=3 Entonces
						base <- 300
					SiNo
						Si hijos>=4 Y hijos<=5 Entonces
							base <- 350
						SiNo
							base <- 400
						FinSi
					FinSi
				FinSi
				hijos_7_18 <- 0
				Para i<-1 Hasta hijos Con Paso 1 Hacer
					Escribir 'Edad del hijo/hija ', i, ': 'Sin Saltar
					Leer edad
					Si edad>=7 Y edad<=18 Entonces
						hijos_7_18 <- hijos_7_18+1
					FinSi
				FinPara
				extra <- hijos_7_18*(0.06*base)
				total <- base+extra
				Escribir 'Base: Q.', base
				Escribir 'Hijos entre 7 y 18: ', hijos_7_18
				Escribir 'Extra: Q.', extra
				Escribir 'Total: Q.', total
			SiNo
				Si opcion=3 Entonces
					Escribir 'Saliendo...'
				SiNo
					Escribir 'Opción inválida'
				FinSi
			FinSi
		FinSi
		Escribir '--------------------------'
	Hasta Que opcion=3
FinAlgoritmo