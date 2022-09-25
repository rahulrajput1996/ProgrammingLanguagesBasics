import java.util.Random;
import java.util.Scanner;

class Guess {
    int randomnum;
    int myinput;
    private int noofguess;
    private Scanner sc;

    public Guess() {
        Random mynum = new Random();
        randomnum = mynum.nextInt(50, 101);
    }

    public int userinput() {
        System.out.println("choose a number from 50 to 100");
        sc = new Scanner(System.in);
        int num = sc.nextInt();
        return num;
    }

    public boolean iscorrect(int myinput) {
        if (randomnum == myinput) {
            return true;
        } else if (randomnum > myinput) {
            System.out.println("increase the number");
            return false;
        } else {
            System.out.println("decrease the number");
            return false;
        }
    }

    public void setnoofguess() {
        noofguess = noofguess + 1;
    }

    public int getnoofguess() {
        return noofguess;
    }

}

public class Rahul43_50 {
    public static void main(String[] args) {
        // System.out.println(Math.PI);
        Guess game = new Guess();
        while (true) {
            int num = game.userinput();
            game.setnoofguess();
            if (game.iscorrect(num)) {
                System.out.println("the guess taken is " + game.getnoofguess());
                break;
            } else {
                System.out.println("the guess taken is " + game.getnoofguess());
                continue;
            }

        }

    }
}
