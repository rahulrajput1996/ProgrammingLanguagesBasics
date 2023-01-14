class Animal {
    public int legs;
    public String bodysize;

    public void setlegs(int a) {
        legs = a;
    }

    public void setbodysize(String a) {
        bodysize = a;
    }

    public void defination() {
        System.out.println("i am best with legs " + legs);
    }
}

class Cat extends Animal {
    int eyes;

    public void seteyes(int a) {
        eyes = a;
    }

    public void catdefination() {
        System.out.println("i have " + legs + " legs and eyes " + eyes + "body size" + bodysize);
    }
}

public class Rahul45 {
    public static void main(String[] args) {
        Animal dog = new Animal();
        dog.setlegs(4);
        dog.setbodysize("large");
        dog.defination();

        Cat black = new Cat();
        black.seteyes(2);
        black.setbodysize("small");
        black.catdefination();
        System.out.println(black.legs);
        System.out.println(black.eyes);
        System.out.println(black.bodysize);
    }
}
