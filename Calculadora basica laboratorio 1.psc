Algoritmo Calculadora
	Definir num1, num2, opcion, resultado Como Real
	Escribir 'Calculadora básica'
	Escribir 'Ingresa el primer número: '
	Leer num1
	Escribir 'Ingresa el segundo número: '
	Leer num2
	Escribir 'Selecciona la operación:'
	Escribir '1. Sumar'
	Escribir '2. Restar'
	Escribir '3. Multiplicar'
	Escribir '4. Dividir'
	Escribir 'Ingresa el número de la operación: '
	Leer opcion
	Si opcion>=1 Y opcion<=4 Entonces
		Si opcion=1 Entonces
			resultado <- num1+num2
			Escribir 'El resultado de la suma es: ', resultado
		SiNo
			Si opcion=2 Entonces
				resultado <- num1-num2
				Escribir 'El resultado de la resta es: ', resultado
			SiNo
				Si opcion=3 Entonces
					resultado <- num1*num2
					Escribir 'El resultado de la multiplicación es: ', resultado
				SiNo
					Si opcion=4 Entonces
						Si num2=0 Entonces
							Escribir 'No se puede dividir entre cero.'
						SiNo
							resultado <- num1/num2
							Escribir 'El resultado de la división es: ', resultado
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	SiNo
		Escribir 'Opción inválida.'
	FinSi
FinAlgoritmo
