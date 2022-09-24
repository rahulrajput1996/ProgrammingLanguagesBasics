import java.util.Scanner;

public class rahul18 {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String mystr = sc.nextLine();

            switch (mystr) {
                case "harry" -> {
                    System.out.println("i am harry");
                    System.out.println("i am harry");
                }
                case "Mohit" -> System.out.println("i am Mohit");
                case "Rohit" -> System.out.println("i am rohit");
                default -> System.out.println("i am default");
            }
        }
    }
}
