package com.harry.company;

public class Sphere extends Shape {
	Sphere(int a) {
		super(a, 0);
	}

	public double volume() {
		return Math.PI * (4.00 / 3.00) * dim1 * dim1 * dim1;
	}
}