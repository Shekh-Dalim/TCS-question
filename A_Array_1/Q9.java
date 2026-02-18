/************* Q: Second smallest Element in an array TC- O(n)  SC-O(1)*************/

import java.util.*;

class Dalim {

    public static int[] smallestAndSecondSmallest(int arr[]) {
        int minElement = Integer.MAX_VALUE; 
        int secondMinElement = Integer.MAX_VALUE;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < minElement) {
                secondMinElement = minElement;
                minElement = arr[i];
            } 
            else if (arr[i] < secondMinElement && arr[i] > minElement) {
                secondMinElement = arr[i];
            }
        }

        return new int[]{minElement, secondMinElement};
    }

    public static void main(String args[]) {

        int arr[] = {1, 33, 14, 5};
        int result[] = smallestAndSecondSmallest(arr);
        System.out.println("Smallest element: " + result[0]);
        System.out.println("Second Smallest element: " + result[1]);
    }
}
