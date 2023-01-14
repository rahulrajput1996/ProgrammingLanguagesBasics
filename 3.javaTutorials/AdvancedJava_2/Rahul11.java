import java.io.File;
import java.io.FileWriter;
import java.util.Scanner;

public class Rahul11 {
    public static void main(String[] args) {

        // Creating a file
        File myfile = new File("animal.txt");
        try {
            myfile.createNewFile();
        } catch (Exception e) {
            System.out.println("not able to write");
            System.out.println(e);
        }

        // Writing in a file
        try {
            FileWriter mf = new FileWriter("animal.txt");
            mf.write("this is a good boy\ni am a bad boy");
            mf.close();
        } catch (Exception e) {
            System.out.println(e);
        }

        // Reading a file
        try {
            Scanner sc = new Scanner(myfile);
            while (sc.hasNextLine()) {
                System.out.println(sc.nextLine());
            }
            sc.close();
        } catch (Exception e) {
            System.out.println(e);
        }

        // deleting a file
        if (myfile.delete()) {
            System.out.println("file is deleted");
        } else {
            System.out.println("not deleted");
        }

    }
}