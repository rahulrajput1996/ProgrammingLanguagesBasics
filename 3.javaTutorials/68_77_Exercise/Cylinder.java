package com.harry.company;

public class Cylinder extends Shape {
	Cylinder(int a, int b) {
		super(a, b);
	}

	public double volume() {
		return Math.PI * dim1 * dim1 * dim2;
	}
}