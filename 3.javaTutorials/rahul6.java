import java.util.Scanner;

public class rahul6 {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("first enter your highest marks in a subject");
            int highestmarks = sc.nextInt();
            System.out.println("first paper marks you got?");
            float paper1 = sc.nextFloat();
            System.out.println("second paper marks you got?");
            float paper2 = sc.nextFloat();
            System.out.println("third paper marks you got?");
            float paper3 = sc.nextFloat();
            System.out.println("fourth paper marks you got?");
            float paper4 = sc.nextFloat();
            System.out.println("fifth paper marks you got?");
            float paper5 = sc.nextFloat();
            float totalmarks = paper1 + paper2 + paper3 + paper4 + paper5;
            int possiblemarks = highestmarks * 5;
            float percentage = (totalmarks * 100) / possiblemarks;
            System.out.println("percentage is " + percentage);

        }

    }
}
