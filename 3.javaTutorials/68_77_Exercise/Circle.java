package com.harry.company;

public class Circle extends Shape {
	Circle(int a) {
		super(a, 0);
	}

	public double area() {
		return Math.PI * dim1 * dim1;
	}
}