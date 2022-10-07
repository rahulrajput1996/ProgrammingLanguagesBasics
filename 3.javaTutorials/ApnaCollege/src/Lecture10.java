public class Lecture10 {
    public static void main(String[] args) {
        boolean isAscending = true;
        int arr[] = { -1,10, 1, 2, 4, 7,15,0 };
        for (int i = 1; i <= arr.length - 1; i++) {
            if (arr[i] < arr[i - 1]) {
                isAscending = false;
                break;
            }
        }
        if (isAscending) {
            System.out.println("array is sorted in ascending order");

        } else {
            System.out.println("array is not sorted in ascending order");

        }

        // find max and min number in an array

        // finding max
        int maxnum = arr[0];
        for (int i = 0; i < arr.length - 1; i++) {
            if (maxnum < arr[i + 1]) {
                maxnum = arr[i + 1];
            }
        }
        System.out.println(maxnum);
        // finding min
        int minnum = arr[0];
        for (int i = 0; i < arr.length - 1; i++) {
            if (minnum > arr[i + 1]) {
                minnum = arr[i + 1];
            }
        }
        System.out.println(minnum);
    }
}
