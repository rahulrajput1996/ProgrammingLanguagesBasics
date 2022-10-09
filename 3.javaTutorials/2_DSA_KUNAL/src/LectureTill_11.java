import java.util.Scanner;

public class LectureTill_11 {
    /**
     * @param args
     */
    public static void main(String[] args) {
        System.out.println("i am good");
        // command line argument
        // System.out.println(args[0]);
        Scanner sc = new Scanner(System.in);
        String mystr = sc.nextLine();
        switch (mystr) {
            case "my name":
                System.out.println("good");
                break;
            case "your name":
                System.out.println("bad");
                break;
            default:
                System.out.println("no matched");
                break;
        }
        sc.close();
    }
}
