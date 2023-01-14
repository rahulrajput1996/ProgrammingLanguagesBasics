public class Lecture15 {
    public static void main(String[] args) {
        System.out.println(5 >> 1);
        int num = 5;
        // get 2nd index bit
        int bitmask = num << 2;
        int num2 = bitmask & num;
        if (num2 == 0) {
            System.out.println("2nd index bit was zero");
        } else {
            System.out.println("2nd index bit was one");
        }

        // set 1st index bit
        bitmask = 1 << 1;
        int num3 = bitmask | num;
        System.out.println(num3);

        // clear 2nd index bit
        bitmask = 1 << 2;
        int num4 = (~bitmask) & num;
        System.out.println(num4);

        // update bit is similar to set bit or clear bit
    }
}
