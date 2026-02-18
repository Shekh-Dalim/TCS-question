/************* Q: Second largest Element in an array TC- O(n)  SC-O(1)*************/

class Dalim {
    public static int secondLargest(int arr[]) {
        int maxElement = Integer.MIN_VALUE;
        int secondMaxElement = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            if (maxElement < arr[i]) {
                secondMaxElement = maxElement;
                maxElement = arr[i];
            }
            else if(secondMaxElement < arr[i] && arr[i]< maxElement){
                secondMaxElement = arr[i];
            }
        }
        return secondMaxElement;
    }

    public static void main(String args[]){
    int arr[] = {1, 2, 33, 14, 5};
    int secondLargest=secondLargest(arr);
    System.out.println("second largest elemet: "+secondLargest);

    }
}

/************* Q: largest and Second largest Element in an array together TC- O(n)  SC-O(1)*************/


import java.util.*;
class Dalim {

    public static int[] largestAndSecondLargest(int arr[]) {
        int maxElement = Integer.MIN_VALUE;
        int secondMaxElement = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > maxElement) {
                secondMaxElement = maxElement;
                maxElement = arr[i];
            } 
            else if (arr[i] > secondMaxElement && arr[i] < maxElement) {
                secondMaxElement = arr[i];
            }
        }

        return new int[]{maxElement, secondMaxElement};
    }

    public static void main(String args[]) {

        int arr[] = {1, 2, 33, 14, 5};

        int result[] = largestAndSecondLargest(arr);

        System.out.println("Largest element: " + result[0]);
        System.out.println("Second largest element: " + result[1]);
    }
}

