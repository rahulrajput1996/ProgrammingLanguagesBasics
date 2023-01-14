interface Room {
    void bed();

    void floor();
}

interface Lowerportion extends Room {
    void gallery();

    void plantare();

}

class House implements Lowerportion {
    public void bed() {
        System.out.println("i am bed");
    }

    public void floor() {
        System.out.println("i am floor");
    }

    public void gallery() {
        System.out.println("i am gallery");
    }

    public void plantare() {
        System.out.println("i am plant area");
    }
}

public class Rahul59 {
    public static void main(String[] args) {
        House r1 = new House();
        r1.bed();
        r1.floor();
        r1.gallery();
        r1.plantare();

    }
}
