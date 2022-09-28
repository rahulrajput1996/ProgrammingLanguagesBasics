package com.harry.company;

public class Shape {
	int dim1;
	int dim2;

	Shape(int a, int b) {
		this.dim1 = a;
		this.dim2 = b;
	}

	public int getdim1() {
		return this.dim1;
	}

	public int getdim2() {
		return this.dim2;
	}

	public void setdim(int p1, int p2) {
		this.dim1 = p1;
		this.dim2 = p2;
	}
}