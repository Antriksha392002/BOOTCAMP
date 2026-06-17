#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_len = 1;       
    int current_len = 1;  
    int start_index = 0;   
    int best_start = 0;   

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current_len++;
        } else {
        
            if (current_len > max_len) {
                max_len = current_len;
                best_start = start_index;
            }
            
            current_len = 1;
            start_index = i;
        }
    }

    
    
    printf("Longest Increasing Subarray: ");
    for (int i = best_start; i < best_start + max_len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
