int[] myArray = {7, 12, 9, 4, 11};
 int minVal = myArray[0];

for (int i : myArray) {
    if (i < minVal) {
       minVal = i;
    }
}

System.out.println("Lowest value: " + minVal);
