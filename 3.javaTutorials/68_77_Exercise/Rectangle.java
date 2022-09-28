package com.harry.company;

public class Rectangle extends Shape {

	Rectangle(int a, int b) {
		super(a, b);
	}

	public int area() {
		return dim1 * dim2;
	}
}