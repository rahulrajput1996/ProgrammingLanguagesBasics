class Employee {
    private int id;
    private String name;

    public Employee() {
        id = 0;
        name = "rahul";
    }

    public Employee(int newid, String newname) {
        id = newid;
        name = newname;
    }

    public int getid() {
        return id;
    }

    public String getname() {
        return name;
    }

}

public class Rahul42 {
    public static void main(String[] args) {
        Employee exp = new Employee();
        System.out.println(exp.getid());
        System.out.println(exp.getname());

        Employee fresher = new Employee(1, "ashish");
        System.out.println(fresher.getid());
        System.out.println(fresher.getname());

    }
}