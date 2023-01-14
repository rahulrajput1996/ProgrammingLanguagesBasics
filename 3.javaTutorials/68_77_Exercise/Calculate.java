package com.harry.company;

public class Calculate {
	public static void main(String[] args) {
		Shape s1 = new Shape(35, 45);
		s1.setdim(11, 22);
		System.out.println(s1.getdim1());
		System.out.println(s1.getdim2());
		Rectangle r1 = new Rectangle(20, 22);
		System.out.println(r1.area());
		Square r2 = new Square(25);
		System.out.println(r2.area());
		Circle r3 = new Circle(17);
		System.out.println(r3.area());
		Sphere r4 = new Sphere(21);
		System.out.println(r4.volume());
		Cylinder r5 = new Cylinder(7, 9);
		System.out.println(r5.volume());
	}
}