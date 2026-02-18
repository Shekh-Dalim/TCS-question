/****************** Q:Largest element in an array  TC- O(n) SC- O(1) ***************/

class Dalim {
    public static int largest(int arr[]) {
        int maxElement = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            if (maxElement < arr[i]) {
                maxElement = arr[i];
            }
        }
        return maxElement;
    }

    public static void main(String args[]){
    int arr[] = {1, 2, 33, 4, 5};
    int ans=largest(arr);
    System.out.println(ans);

    }
}
