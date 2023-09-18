// PROYECTO 2
// Programacion de microprocesadores
// Calculadora de sumatorias con programacion paralela
// Autor: Jorge Luis Lopez 221038
//

#include <stdio.h>
#include <math.h>
#include <omp.h> 

#define NUM_THREADS 3 //Numero de hilos

// Función que calcula la sumatoria de los números naturales desde n hasta limite superior
int sumatoria1(int n, int limiteSuperior, int numThreads) {
    int sum1 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum1 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum1 += i;
            }
            #pragma omp atomic
            sum1 += localSum1;
        }
    }
    return sum1;
}

// Función que calcula la sumatoria de n^2 desde n hasta limite superior
int sumatoria2(int n, int limiteSuperior, int numThreads) {
    int sum2 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum2 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum2 += i * i;
            }
            #pragma omp atomic
            sum2 += localSum2;
        }
    }
    return sum2;
}

// Función que calcula la sumatoria de n/2 desde n hasta limite superior
int sumatoria3(int n, int limiteSuperior, int numThreads) {
    int sum3 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum3 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum3 += i / 2;
            }
            #pragma omp atomic
            sum3 += localSum3;
        }
    }
    return sum3;
}

// Función que calcula la sumatoria de 1/n^2 desde n hasta limite superior
int sumatoria4(int n, int limiteSuperior, int numThreads) {
    int sum4 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum4 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum4 += 1 / (i * i);
            }
            #pragma omp atomic
            sum4 += localSum4;
        }
    }
    return sum4;
}

// Función que calcula la sumatoria de 1/2^n desde n hasta limite superior
int sumatoria5(int n, int limiteSuperior, int numThreads) {
    int sum5 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum5 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum5 += 1 / (2 * i);
            }
            #pragma omp atomic
            sum5 += localSum5;
        }
    }
    return sum5;
}

// Función que calcula la sumatoria de la raiz de n desde n hasta limite superior
int sumatoria6(int n, int limiteSuperior, int numThreads) {
    int sum6 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum6 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum6 += sqrt(i);
            }
            #pragma omp atomic
            sum6 += localSum6;
        }
    }
    return sum6;
}

// Función que calcula la sumatoria de logaritmo de n desde n hasta limite superior
int sumatoria7(int n, int limiteSuperior, int numThreads) {
    int sum7 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum7 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum7 += log(i);
            }
            #pragma omp atomic
            sum7 += localSum7;
        }
    }
    return sum7;
}

// Funcion que calcula n^3 desde n hasta limite superior
int sumatoria8(int n, int limiteSuperior, int numThreads) {
    int sum8 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum8 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum8 += i * i * i;
            }
            #pragma omp atomic
            sum8 += localSum8;
        }
    }
    return sum8;
}

// Función que calcula la sumatoria de sin(n) desde n hasta limite superior
int sumatoria9(int n, int limiteSuperior, int numThreads) {
    int sum9 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum9 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum9 += sin(i);
            }
            #pragma omp atomic
            sum9 += localSum9;
        }
    }
    return sum9;
}

// Función que calcula la sumatoria de 1/n! desde n hasta limite superior
int sumatoria10(int n, int limiteSuperior, int numThreads) {
    int sum10 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum10 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                int factorial = 1;
                for (int j = 1; j <= i; j++) {
                    factorial *= j;
                }
                localSum10 += 1 / factorial;
            }
            #pragma omp atomic
            sum10 += localSum10;
        }
    }
    return sum10;
}

// Función que calcula la sumatoria de n * n(n+1)/2 desde n hasta limite superior
int sumatoria11(int n, int limiteSuperior, int numThreads) {
    int sum11 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum11 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum11 += i * (i * (i + 1) / 2);
            }
            #pragma omp atomic
            sum11 += localSum11;
        }
    }
    return sum11;
}

// Función que calcula la sumatoria de 2n-n/n(n+1) desde n hasta limite superior
int sumatoria12(int n, int limiteSuperior, int numThreads) {
    int sum12 = 0;
    #pragma omp parallel sections num_threads(numThreads)
    {
        #pragma omp section
        {
            int localSum12 = 0;
            for (int i = n; i <= limiteSuperior; i++) {
                localSum12 += (2 * i - n) / (i * (i + 1));
            }
            #pragma omp atomic
            sum12 += localSum12;
        }
    }
    return sum12;
}

// Funcion para calcular el promedio de un arreglo de enteros(los resultados de las sumatorias) 
double calcularPromedio(int resultados[], int numSumatorias) {
    int sumaTotal = 0;
    #pragma omp parallel for num_threads(NUM_THREADS) reduction(+:sumaTotal)
    for (int i = 0; i < numSumatorias; i++) {
        sumaTotal += resultados[i];
    }
    return (double)sumaTotal / numSumatorias;
}

// Funcion para calcular el valor maximo de un arreglo de enteros(los resultados de las sumatorias)
int calcularMaximo(int resultados[], int numSumatorias) {
    int maximo = resultados[0];
    #pragma omp parallel for num_threads(NUM_THREADS) reduction(max:maximo)
    for (int i = 1; i < numSumatorias; i++) {
        if (resultados[i] > maximo) {
            maximo = resultados[i];
        }
    }
    return maximo;
}

// Funcion para calcular el valor minimo de un arreglo de enteros(los resultados de las sumatorias)
int calcularMinimo(int resultados[], int numSumatorias) {
    int minimo = resultados[0];
    #pragma omp parallel for num_threads(NUM_THREADS) reduction(min:minimo)
    for (int i = 1; i < numSumatorias; i++) {
        if (resultados[i] < minimo) {
            minimo = resultados[i];
        }
    }
    return minimo;
}

int main() {
    int numThreads; // Variable para almacenar el número de hilos
    //Se imprime una bienvenida y se muestran las opciones de sumatorias
    printf("¡Bienvenido!\n");
    printf("Las sumatorias son las siguientes: \n");
    printf(" 1. La sumatoria de los números naturales desde n al limite superior \n");
    printf(" 2. La sumatoria de n^2 desde n al limite superior  \n");
    printf(" 3. La sumatoria de n/2 desde n al limite superior \n");
    printf(" 4. La sumatoria de 1/n^2 desde n al limite superior \n");
    printf(" 5. La sumatoria de 1/2^n desde n al limite superior \n");
    printf(" 6. La sumatoria de la raiz de n desde n al limite superior \n");
    printf(" 7. La sumatoria de logaritmo de n desde n al limite superior \n");
    printf(" 8. La sumatoria de n^3 desde n al limite superior \n");
    printf(" 9. La sumatoria de sin(n) desde n al limite superior \n");
    printf("10. La sumatoria de 1/n! desde n al limite superior \n");
    printf("11. La sumatoria de n * n(n+1)/2 desde n al limite superior \n");
    printf("12. La sumatoria de 2n-n/n(n+1) desde n al limite superior \n");
    printf(" \n");

    //Se pide al usuario que ingrese el valor de n de la sumatoria 
    int n, limiteSuperior;
    printf("Por favor, ingresa un valor para n: ");
    scanf("%d", &n);

    //Se pide al usuario que ingrese el limite superior de la sumatoria
    printf("Por favor, ingresa el límite superior de la sumatoria: ");
    scanf("%d", &limiteSuperior);
    
    //Se valida que el valor de n sea positivo y que el limite superior sea mayor que n
    if (n <= 0 || limiteSuperior <= n) {
        printf("El valor de n debe ser un número positivo y el límite superior debe ser mayor que n.\n");
        return 1;
    }

    

    // Pide al usuario que ingrese el número de hilos
    printf("Por favor, ingresa el número de hilos: ");
    scanf("%d", &numThreads);
    
    omp_set_num_threads(numThreads); //Se establece el numero de hilos

    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 1
    double t1, t2;
    t1 = omp_get_wtime();
    int resultado1 = sumatoria1(n, limiteSuperior, numThreads);
    t2 = omp_get_wtime();
    double tiempoEjecucion1 = t2 - t1;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 2
    double t3, t4;
    t3 = omp_get_wtime();
    int resultado2 = sumatoria2(n, limiteSuperior, numThreads);
    t4 = omp_get_wtime();
    double tiempoEjecucion2 = t4 - t3;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 3
    double t5, t6;
    t5 = omp_get_wtime();
    int resultado3 = sumatoria3(n, limiteSuperior, numThreads);
    t6 = omp_get_wtime();
    double tiempoEjecucion3 = t6 - t5;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 4
    double t7, t8;
    t7 = omp_get_wtime();
    int resultado4 = sumatoria4(n, limiteSuperior, numThreads);
    t8 = omp_get_wtime();
    double tiempoEjecucion4 = t8 - t7;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 5
    double t9, t10;
    t9 = omp_get_wtime();
    int resultado5 = sumatoria5(n, limiteSuperior, numThreads);
    t10 = omp_get_wtime();
    double tiempoEjecucion5 = t10 - t9;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 6
    double t11, t12;
    t11 = omp_get_wtime();
    int resultado6 = sumatoria6(n, limiteSuperior, numThreads);
    t12 = omp_get_wtime();
    double tiempoEjecucion6 = t12 - t11;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 7
    double t13, t14;
    t13 = omp_get_wtime();
    int resultado7 = sumatoria7(n, limiteSuperior, numThreads);
    t14 = omp_get_wtime();
    double tiempoEjecucion7 = t14 - t13;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 8
    double t15, t16;
    t15 = omp_get_wtime();
    int resultado8 = sumatoria8(n, limiteSuperior, numThreads); 
    t16 = omp_get_wtime();
    double tiempoEjecucion8 = t16 - t15;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 9
    double t17, t18;
    t17 = omp_get_wtime();
    int resultado9 = sumatoria9(n, limiteSuperior, numThreads);
    t18 = omp_get_wtime();
    double tiempoEjecucion9 = t18 - t17;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 10
    double t19, t20;
    t19 = omp_get_wtime();
    int resultado10 = sumatoria10(n, limiteSuperior, numThreads);
    t20 = omp_get_wtime();
    double tiempoEjecucion10 = t20 - t19;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 11
    double t21, t22;
    t21 = omp_get_wtime();
    int resultado11 = sumatoria11(n, limiteSuperior, numThreads);
    t22 = omp_get_wtime();
    double tiempoEjecucion11 = t22 - t21;
    //Se calcula la operacion y el tiempo de ejecucion de la sumatoria 12
    double t23, t24;
    t23 = omp_get_wtime();
    int resultado12 = sumatoria12(n, limiteSuperior, numThreads);
    t24 = omp_get_wtime();
    double tiempoEjecucion12 = t24 - t23;

    printf(" \n");

    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 1
    printf("La sumatoria de los números naturales del %d al %d es: %d\n", n, limiteSuperior, resultado1);
    printf("Tiempo de ejecución de la sumatoria 1: %f segundos\n", tiempoEjecucion1);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 2
    printf("La sumatoria de n^2 desde %d al %d es: %d\n", n, limiteSuperior, resultado2);
    printf("Tiempo de ejecución de la sumatoria 2: %f segundos\n", tiempoEjecucion2);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 3
    printf("La sumatoria de n/2 desde %d al %d es: %d\n", n, limiteSuperior, resultado3);
    printf("Tiempo de ejecución de la sumatoria 3: %f segundos\n", tiempoEjecucion3);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 4
    printf("La sumatoria de 1/n^2 desde %d al %d es: %d\n", n, limiteSuperior, resultado4);
    printf("Tiempo de ejecución de la sumatoria 4: %f segundos\n", tiempoEjecucion4);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 5
    printf("La sumatoria de 1/2^n desde %d al %d es: %d\n", n, limiteSuperior, resultado5);
    printf("Tiempo de ejecución de la sumatoria 5: %f segundos\n", tiempoEjecucion5);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 6
    printf("La sumatoria de la raiz de n desde %d al %d es: %d\n", n, limiteSuperior, resultado6);
    printf("Tiempo de ejecución de la sumatoria 6: %f segundos\n", tiempoEjecucion6);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 7
    printf("La sumatoria de logaritmo de n desde %d al %d es: %d\n", n, limiteSuperior, resultado7);
    printf("Tiempo de ejecución de la sumatoria 7: %f segundos\n", tiempoEjecucion7);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 8
    printf("La sumatoria de n^3 desde %d al %d es: %d\n", n, limiteSuperior, resultado8);
    printf("Tiempo de ejecución de la sumatoria 8: %f segundos\n", tiempoEjecucion8);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 9
    printf("La sumatoria de sin(n) desde %d al %d es: %d\n", n, limiteSuperior, resultado9);
    printf("Tiempo de ejecución de la sumatoria 9: %f segundos\n", tiempoEjecucion9);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 10
    printf("La sumatoria de 1/n! desde %d al %d es: %d\n", n, limiteSuperior, resultado10);
    printf("Tiempo de ejecución de la sumatoria 10: %f segundos\n", tiempoEjecucion10);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 11
    printf("La sumatoria de n * n(n+1)/2 desde %d al %d es: %d\n", n, limiteSuperior, resultado11);
    printf("Tiempo de ejecución de la sumatoria 11: %f segundos\n", tiempoEjecucion11);
    printf(" \n");
    //Se imprimen los resultados y el tiempo de ejecucion de la sumatoria 12
    printf("La sumatoria de 2n-n/n(n+1) desde %d al %d es: %d\n", n, limiteSuperior, resultado12);
    printf("Tiempo de ejecución de la sumatoria 12: %f segundos\n", tiempoEjecucion12);
    printf(" \n");

    int resultados[12];

    // Calcular y almacenar los resultados en el arreglo
    resultados[0] = resultado1;
    resultados[1] = resultado2;
    resultados[2] = resultado3;
    resultados[3] = resultado4;
    resultados[4] = resultado5;
    resultados[5] = resultado6;
    resultados[6] = resultado7;
    resultados[7] = resultado8;
    resultados[8] = resultado9;
    resultados[9] = resultado10;
    resultados[10] = resultado11;
    resultados[11] = resultado12;

    // Calcular el promedio de los resultados
    double sumaTotal = 0.0; // Usamos un valor decimal para evitar la pérdida de precisión
    for (int i = 0; i < 12; i++) {
        sumaTotal += resultados[i];
    }

    double promedio = sumaTotal / 12.0; // Dividimos la suma por la cantidad de elementos


    // Imprimir el promedio
    printf("El promedio de los resultados de las sumatorias es: %lf\n", promedio);

    // Calcular el valor máximo de los resultados
    int maximo = resultados[0];
    for (int i = 1; i < 12; i++) {
        if (resultados[i] > maximo) {
            maximo = resultados[i];
        }
    }

    // Imprimir el valor máximo
    printf("El valor máximo de los resultados de las sumatorias es: %d\n", maximo);

    //Calcular el valor minimo de los resultados
    int minimo = resultados[0];
    for (int i = 1; i < 12; i++) {
        if (resultados[i] < minimo) {
            minimo = resultados[i];
        }
    }

    // Imprimir el valor mínimo
    printf("El valor mínimo de los resultados de las sumatorias es: %d\n", minimo);

    return 0;
}
