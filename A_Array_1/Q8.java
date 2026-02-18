/************* Q: Smallest Element in an array TC- O(n)  SC-O(1)*************/

import java.util.*;

class Dalim {

    public static int smallestEle(int arr[]) {
        int minElement = Integer.MAX_VALUE; 

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < minElement) {
                minElement = arr[i];
            } 
            
        }

        return minElement;
    }

    public static void main(String args[]) {

        int arr[] = {1, 33, 14, 5};
        int result = smallestEle(arr);
        System.out.println("Smallest element: " + result);
    }
}
