public class rahul32 {
    public static void myfun(int[] arr) {
        arr[0] = 100;
    }

    public static int mysum(int... arr) {
        int sum = 0;
        for (int i : arr) {
            sum = sum + i;
        }
        return sum;
    }

    public static void main(String[] args) {
        int[] marks = { 10, 20, 30, 40, 50 };
        myfun(marks);
        System.out.println(marks[0]);

        int yoursum = mysum(7,3,2);
        System.out.println(yoursum);
    }
}
