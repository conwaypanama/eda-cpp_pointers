//
//  main.cpp
//  function forum cpp
//
//  Created by Zahir Gudiño on 3/3/16.
//  Copyright © 2016 Zahir Gudiño. All rights reserved.
//

#include <iostream>

/**
 *  Suma un acumulador con nuevo valor
 *
 *  @param acum_arg acumulador
 *  @param new_arg  nuevo valor
 */
inline void sum(int& acum_arg, const int* new_arg) { acum_arg += *new_arg; }

/**
 *  Determina si un numero es par
 *
 *  @param num_arg numero
 *
 *  @return retorna verdadero si es par
 */
inline bool is_even(int& num_arg) {
    bool even = false;
    
    if (num_arg == 0 || num_arg % 2 == 0)
        even = !even;
    
    return even;
}

/**
 *  Promedio
 *
 *  @param acum_arg     acumulador
 *  @param elmcount_arg cantidad total de muestra
 *
 *  @return retorna promedio de acumulador (basado en muestra)
 */
inline int avg(int acum_arg, int elmcount_arg) { return acum_arg / elmcount_arg; }

int main(int argc, const char * argv[]) {
    int len = 25;
    int arr[len];
    
    int* arr_ptr = arr; // apuntador a arreglo arr
    
    int v_sum = 0;
    int v_avg = 0;
    int v_pairs = 0;
    
    for (int i = 0; i < len; i++) {
        std::cout << "Valor Numero #" << i + 1 << ": ";
        std::cin >> arr_ptr[i];
        
        if (is_even(arr_ptr[i]))
            v_pairs++;
        
        sum(v_sum, &arr_ptr[i]); // modifica el acumulador (nuevo valor + acumulado)
    }
    
    v_avg = v_sum / len; // promedio
    
    // Resultado
    std::cout << "\n";
    std::cout << "[[ RESULTADO ]]" << std::endl;
    std::cout << "Suma: " << v_sum << std::endl;
    std::cout << "Promedio: " << v_avg << std::endl;
    std::cout << "Pares: " << v_pairs << std::endl;
    
    std::cout << "\n";
    
    return 0;
}
