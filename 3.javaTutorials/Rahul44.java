class Cylinder {
    private float radius;
    private float height;

    public void setradius(float newradius) {
        radius = newradius;
    }

    public void setheight(float newheight) {
        height = newheight;
    }

    public Cylinder(float myradius, float myheight) {
        radius = myradius;
        height = myheight;
    }

    public Cylinder() {
        radius = 0f;
        height = 0f;
    }

    public float getradius() {
        return radius;
    }

    public float getheight() {
        return height;

    }

    public float surfacearea() {
        return (2 * (22.0f / 7.0f) * radius) * (radius + height);
    }

    public float volume() {
        return (22.0f / 7.0f) * (radius * radius * height);
    }
}

class Rectangle {
    int length;
    int width;

    public Rectangle() {
        length = 4;
        width = 5;
    }

    public Rectangle(int newlength, int newwidth) {
        length = newlength;
        width = newwidth;
    }
}

public class Rahul44 {

    public static void main(String[] args) {

        Cylinder small = new Cylinder();
        small.setradius(9.1f);
        small.setheight(12.3f);
        System.out.println(small.getradius());
        System.out.println(small.getheight());
        System.out.println(small.surfacearea());
        System.out.println(small.volume());

        Cylinder big = new Cylinder(7.5f, 12.3f);
        System.out.println(big.getradius());
        System.out.println(big.getheight());
        System.out.println(big.surfacearea());
        System.out.println(big.volume());

        Rectangle medium = new Rectangle();
        System.out.println(medium.length);
        System.out.println(medium.width);
        Rectangle large = new Rectangle(10, 20);
        System.out.println(large.length);
        System.out.println(large.width);
    }
}
