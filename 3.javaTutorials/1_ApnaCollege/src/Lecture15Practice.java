public class Lecture15Practice {
    public static int bnTOdc(int num) {
        int sum = 0;
        int count = 0;
        for (int i = num; i > 0; i = num) {
            int remainder = num % 10;
            sum = sum + remainder * pow(2, count);
            count = count + 1;
            num = num / 10;
        }
        return sum;
    }

    public static int dcTObn(int num) {
        int sum = 0;
        int multiplier = 1;
        int ans;
        for (int i = num; i != 0; i = ans) {
            ans = i / 2;
            int remainder = i % 2;
            sum = sum + remainder * multiplier;
            multiplier = multiplier * 10;

        }
        return sum;
    }

    public static int pow(int num1, int power) {
        int mul = 1;
        for (int i = power; i >= 1; i--) {
            mul = mul * num1;
        }
        return mul;
    }

    public static void main(String[] args) {

        // toggle a bit

        int num = 5;
        int position = 1;
        int bitmask = 1 << position;
        int num2 = bitmask & num;
        if (num2 == 0) {
            System.out.println("bit is zero");
            int num3 = bitmask | num;
            System.out.println(num3);
        } else {
            System.out.println("bit is one");
            int num4 = (~bitmask) & num;
            System.out.println(num4);
        }
        // binary to decimal
        int num5 = 10110100;
        int ans1 = bnTOdc(num5);
        System.out.println(ans1);

        // decimal to binary
        int num6 = 180;
        int ans2 = dcTObn(num6);
        System.out.println(ans2);
        String s1 = Integer.toString(ans2);
        int count = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) == '1') {
                count = count + 1;
            }
        }
        System.out.println("number of ones is " + count);

        // num is power of 2 or not
        int nump = 17;
        for (int i = 0; i < nump; i++) {
            if (pow(2, i) == nump) {
                System.out.println("yes we can do in power of 2");
            }
        }
    }
}
