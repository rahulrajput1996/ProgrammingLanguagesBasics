package com.harry.company;

public class Square extends Shape {
	Square(int a) {
		super(a, 0);
	}

	public int area() {
		return dim1 * dim1;
	}
}