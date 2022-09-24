import java.util.Scanner;

public class RAHUL5 {
    public static void main(String[] args) {
        try (Scanner Sc = new Scanner(System.in)) {
            System.out.println("give first number here");
            int a = Sc.nextInt();
            System.out.println("give second number here");
            int b = Sc.nextInt();
            System.out.println(a + b);
            System.out.println("give first number here");
            float c = Sc.nextFloat();
            System.out.println("give second number here");
            float d = Sc.nextFloat();
            System.out.println(c + d);
            boolean e = Sc.hasNextInt();
            System.out.println(e);

            // String str = Sc.next();
            // System.out.println(str);

            // String str2 = Sc.nextLine();
            // System.out.println(str2);
        }
    }
}
