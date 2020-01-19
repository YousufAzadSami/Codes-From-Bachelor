package com.mime.minefront.graphics;

public class Render {

	public final int height;
	public final int width;
	public final int[] pixels;

	public Render(int height, int width) {
		this.height = height;
		this.width = width;
		pixels = new int[width * height];
	}
}
