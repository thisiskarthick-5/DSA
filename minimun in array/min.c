int my_array[] = {7, 12, 9, 4, 11};
int minVal = my_array[0];
for (int i = 0; i < sizeof(my_array) / sizeof(my_array[0]); i++) {
     if (my_array[i] < minVal) {
         minVal = my_array[i];
     }
 }

 printf("Lowest value: %d\n", minVal);
