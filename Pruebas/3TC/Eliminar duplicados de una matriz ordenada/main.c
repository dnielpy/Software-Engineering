#include <stdio.h>
#include <stdbool.h>

int removeDuplicates(int* nums, int numsSize) {
    int k = 0;
    int x[numsSize];

    int i;
    int j;
    for(i = 0; i < numsSize; i++){
        bool repeated = false;
        for(j = 0; j < numsSize; j++){
            if(nums[i] == x[j]){
                repeated = true;
            }
        }
        if(repeated == false){
            x[i] = nums[i];
            k++;
        }
    }
    return k;
}

// Función para imprimir un array
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]");
}

int main() {

// Caso de prueba 1: Array vacío
    int nums1[] = {};
    int numsSize1 = 0;
    int result1 = removeDuplicates(nums1, numsSize1);
    printf("Test 1: Input: [], Result: %d, Expected: 0 \n", result1);


    // Caso de prueba 2: Un solo elemento
    int nums2[] = {1};
    int numsSize2 = 1;
    int result2 = removeDuplicates(nums2, numsSize2);
     printf("Test 2: Input: [1], Result: %d, Expected: 1. Array: ", result2);
    printArray(nums2, result2);
    printf("\n");

    // Caso de prueba 3: Elementos sin duplicados
    int nums3[] = {1, 2, 3, 4, 5};
    int numsSize3 = 5;
     int result3 = removeDuplicates(nums3, numsSize3);
       printf("Test 3: Input: [1, 2, 3, 4, 5], Result: %d, Expected: 5. Array: ", result3);
    printArray(nums3, result3);
    printf("\n");
    

    // Caso de prueba 4: Duplicados al inicio
    int nums4[] = {1, 1, 2, 3, 4};
    int numsSize4 = 5;
      int result4 = removeDuplicates(nums4, numsSize4);
    printf("Test 4: Input: [1, 1, 2, 3, 4], Result: %d, Expected: 4. Array: ", result4);
    printArray(nums4, result4);
    printf("\n");

    // Caso de prueba 5: Duplicados al final
    int nums5[] = {1, 2, 3, 4, 4};
    int numsSize5 = 5;
    int result5 = removeDuplicates(nums5, numsSize5);
     printf("Test 5: Input: [1, 2, 3, 4, 4], Result: %d, Expected: 4. Array: ", result5);
    printArray(nums5, result5);
    printf("\n");

    // Caso de prueba 6: Duplicados en medio
    int nums6[] = {1, 2, 2, 3, 4};
    int numsSize6 = 5;
    int result6 = removeDuplicates(nums6, numsSize6);
    printf("Test 6: Input: [1, 2, 2, 3, 4], Result: %d, Expected: 4. Array: ", result6);
     printArray(nums6, result6);
     printf("\n");


    // Caso de prueba 7: Múltiples duplicados
    int nums7[] = {1, 1, 2, 2, 3, 3, 4, 4};
    int numsSize7 = 8;
     int result7 = removeDuplicates(nums7, numsSize7);
     printf("Test 7: Input: [1, 1, 2, 2, 3, 3, 4, 4], Result: %d, Expected: 4. Array: ", result7);
    printArray(nums7, result7);
    printf("\n");

    // Caso de prueba 8: Duplicados consecutivos
    int nums8[] = {1, 1, 1, 2, 2, 2, 3};
    int numsSize8 = 7;
      int result8 = removeDuplicates(nums8, numsSize8);
      printf("Test 8: Input: [1, 1, 1, 2, 2, 2, 3], Result: %d, Expected: 3. Array: ", result8);
    printArray(nums8, result8);
     printf("\n");

    
    return 0;
}
